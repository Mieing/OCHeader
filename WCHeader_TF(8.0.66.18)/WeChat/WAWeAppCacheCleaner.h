@class WASweeperInfo, NSString, WAPackageSweeperLogic;

@interface WAWeAppCacheCleaner : NSObject <MMCacheCleaner>

@property (nonatomic) BOOL isRunning;
@property (nonatomic) BOOL cancelled;
@property (retain, nonatomic) WAPackageSweeperLogic *sweeperLogic;
@property (retain, nonatomic) WASweeperInfo *cacheSweepInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getCachePaths;
- (int)getDefaultCleanPolicy;
- (unsigned long long)doCleanForSize:(unsigned long long)a0;
- (void)cancelClean;
- (id)getSweepInfoFromCache:(BOOL)a0 cleanCacheAfterGet:(BOOL)a1;
- (unsigned int)getWeappAutoCleanerExpiresTime;
- (void).cxx_destruct;

@end
