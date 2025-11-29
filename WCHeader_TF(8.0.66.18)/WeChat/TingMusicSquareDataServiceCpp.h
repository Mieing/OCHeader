@class NSString;

@interface TingMusicSquareDataServiceCpp : UnitRCObjcBaseProxyClass <TingMusicSquareDataService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)addListener:(id)a0;
- (BOOL)removeListener:(id)a0;
- (id)fetchData:(id)a0;
- (void)stopFetching;
- (id)getSquareData;
- (int)getLoadingStatus;
- (void)updateSingleDiscoverItem:(id)a0 line:(id)a1;
- (id)getCachedData;
- (void)saveCachedData:(id)a0;
- (id)myLineService;
- (void)onRefreshEvent:(id)a0;

@end
