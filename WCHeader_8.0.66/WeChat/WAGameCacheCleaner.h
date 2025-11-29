@class NSString, WAPackageSweeperLogic;

@interface WAGameCacheCleaner : NSObject <MMCacheCleaner>

@property (nonatomic) BOOL isRunning;
@property (nonatomic) BOOL cancelled;
@property (retain, nonatomic) WAPackageSweeperLogic *sweeperLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getCachePaths;
- (int)getDefaultCleanPolicy;
- (unsigned long long)doCleanForSize:(unsigned long long)a0;
- (void)cancelClean;
- (id)getSweepInfo;
- (unsigned int)getGameAutoCleanerExpiresTime;
- (void).cxx_destruct;

@end
