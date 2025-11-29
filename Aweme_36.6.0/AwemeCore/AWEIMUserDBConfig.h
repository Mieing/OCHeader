@class NSDictionary, AWEStorage;

@interface AWEIMUserDBConfig : NSObject

@property (nonatomic) BOOL imContactWcdbUseSyncQueue;
@property (nonatomic) BOOL autoCheckPoint;
@property (nonatomic) BOOL switchFallThroughFix;
@property (readonly, nonatomic) AWEStorage *configStorage;
@property (readonly, nonatomic) NSDictionary *dbConfig;

+ (BOOL)enableLoadContactOpt;
+ (BOOL)clearErrorData_ABTest;
+ (long long)fullUpdateExpireMinute;
+ (BOOL)enableSyncQueue;
+ (BOOL)enableCheckPoint;
+ (BOOL)oneUserReadScene_ABTest;
+ (BOOL)syncSetup_ABTest;
+ (BOOL)checkFullUser_ABTest;
+ (BOOL)readUserFilterErrorData_ABTest;
+ (BOOL)fullThroughFix;
+ (BOOL)enableCleanHistoryVersionDBFile;
+ (long long)insertPageSize;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
