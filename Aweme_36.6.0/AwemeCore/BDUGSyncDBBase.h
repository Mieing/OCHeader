@class NSString, FMDatabase;

@interface BDUGSyncDBBase : NSObject

@property (copy, nonatomic) NSString *path;
@property (nonatomic) int version;
@property (retain, nonatomic) FMDatabase *db;

- (void)configureDB;
- (void)createTable;
- (void)upgradeFrom:(int)a0 to:(int)a1;
- (void)downgradeFrom:(int)a0 to:(int)a1;
- (BOOL)close;
- (void).cxx_destruct;
- (BOOL)open;
- (id)init;
- (id)initWithPath:(id)a0 version:(int)a1;

@end
