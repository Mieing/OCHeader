@class WCTDatabase, NSString;

@interface WCHardlinkFileInfoDB : NSObject

@property (retain, nonatomic) WCTDatabase *fileInfoDB;
@property (copy, nonatomic) NSString *fileDBPath;

+ (id)getFileInfoDBPath;

- (id)init;
- (void)removeDB;
- (void)checkpoint;
- (BOOL)insertFileInfo:(id)a0;
- (id)getAllHardLinkInfoWithMD5:(id)a0;
- (id)p_getFileInfoTable;
- (BOOL)shouldEnableDBLiteMode;
- (void).cxx_destruct;

@end
