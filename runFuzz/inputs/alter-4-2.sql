CREATE TABLE t1(c INTEGER PRIMARY KEY, d);
INSERT INTO t1(c,d) VALUES(1,2);
PRAGMA foreign_keys = on;
ALTER TABLE t1 ADD COLUMN e;
ALTER TABLE t1 ADD COLUMN f REFERENCES t1;
ALTER TABLE t1 ADD COLUMN g REFERENCES t1 DEFAULT 4;
CREATE VIRTUAL TABLE fff USING fts5(f);
ALTER TABLE fff ADD COLUMN g;
