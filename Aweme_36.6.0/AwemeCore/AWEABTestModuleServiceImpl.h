@class NSString;

@interface AWEABTestModuleServiceImpl : NSObject <AWEABTestModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)removeABTestDataWithKeys:(id)a0;
- (void)setShouldPrintLog:(BOOL)a0;
- (BOOL)lastUpdateByIncrement;
- (void)setABTestNetworkImpl:(id /* block */)a0;
- (void)fetchABTestDataWithCompletion:(id /* block */)a0;
- (void)updateAllABTestData:(id)a0;
- (void)updatePartialABTestData:(id)a0 shouldCleanStable:(BOOL)a1;
- (BOOL)hasFetchedData;
- (id)getFullABTestData;
- (void)incrementalUpdateData:(id)a0 unchangedKeyList:(id)a1;
- (id)dataVersion;

@end
