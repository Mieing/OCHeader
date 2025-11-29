@class WCTDatabase;

@interface MMActiveMessageInfoPersist : NSObject

@property (retain, nonatomic) WCTDatabase *infoDB;

+ (id)getPathOfInfoPath;
+ (id)getPathOfStatPath;
+ (id)getPathOfActiveMessageDB;

- (id)init;
- (void)closeAndRemoveDB;
- (id)p_getBrowseInfoTable;
- (void)p_createDataBaes;
- (void)addActiveMessageInfo:(id)a0;
- (id)getAllActiveMessageInfo:(id)a0 start:(unsigned int)a1 end:(unsigned int)a2;
- (void).cxx_destruct;

@end
