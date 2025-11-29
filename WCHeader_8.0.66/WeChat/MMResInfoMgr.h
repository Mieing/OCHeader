@class WCTDatabase, NSString, WCTTable;

@interface MMResInfoMgr : NSObject <MMResInfoMgr> {
    NSString *_dbPath;
}

@property (retain) WCTDatabase *db;
@property (retain) WCTTable *tableResInfo;
@property (retain) WCTTable *tableResDownloadInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDBPath:(id)a0;
- (void)openDB;
- (void)createTables;
- (void)closeDB;
- (void)didRecoverDatabase;
- (BOOL)insertNewResInfo:(id)a0;
- (id)getResInfo:(unsigned int)a0 WithSubRestype:(unsigned int)a1;
- (id)getTestResInfo:(unsigned int)a0 WithSubRestype:(unsigned int)a1;
- (id)getResInfo:(unsigned int)a0 WithSubRestype:(unsigned int)a1 WithEid:(unsigned int)a2;
- (id)getResInfoWithLimit:(long long)a0;
- (id)getResInfo:(unsigned int)a0;
- (BOOL)deleteResInfo:(unsigned int)a0;
- (BOOL)deleteResInfo:(unsigned int)a0 WithSubResType:(unsigned int)a1;
- (BOOL)deleteTestResInfo:(unsigned int)a0 WithSubResType:(unsigned int)a1;
- (BOOL)deleteResInfo:(unsigned int)a0 WithSubResType:(unsigned int)a1 WithEid:(unsigned int)a2;
- (BOOL)updateResInfo:(id)a0;
- (BOOL)insertNewResDownloadInfo:(id)a0;
- (id)getResDownloadInfoLimit:(unsigned int)a0;
- (id)getABTestResDownloadInfoLimit:(unsigned int)a0;
- (id)getResDownloadInfo:(unsigned int)a0;
- (id)getABTestResDownloadInfo:(unsigned int)a0;
- (id)getResDownloadInfo:(unsigned int)a0 WithSubtype:(unsigned int)a1;
- (id)getResDownloadInfo:(unsigned int)a0 WithSubtype:(unsigned int)a1 WithEid:(unsigned int)a2;
- (BOOL)updateResDownloadInfo:(id)a0;
- (BOOL)deleteResDownloadInfo:(unsigned int)a0 WithSubtype:(unsigned int)a1;
- (BOOL)deleteTestResDownloadInfo:(unsigned int)a0 WithSubtype:(unsigned int)a1;
- (BOOL)deleteResDownloadInfo:(unsigned int)a0;
- (BOOL)deleteResDownloadInfo:(unsigned int)a0 WithSubtype:(unsigned int)a1 WithEid:(unsigned int)a2;
- (void)dealloc;
- (void).cxx_destruct;

@end
