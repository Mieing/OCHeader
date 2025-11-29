@class WALocationCacheInfo, NSString, LocationRetriever;
@protocol WALocationGetterDelegate;

@interface WALocationGetter : MMObject <LocationRetrieveDelegate>

@property (retain, nonatomic) LocationRetriever *locationRetriever;
@property (retain, nonatomic) WALocationCacheInfo *cacheInfo;
@property (nonatomic) BOOL retrivingLocation;
@property (weak, nonatomic) id<WALocationGetterDelegate> delegate;
@property (readonly, nonatomic) double requiredHorizonAccuracy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isUserDenyToLocationService;

- (id)init;
- (void)startGetLocationWithAuthorizedChallenge:(BOOL)a0 authScene:(unsigned long long)a1;
- (void)startGetLocationWithAuthorizedChallenge:(BOOL)a0 requiredHorizonAccuracy:(double)a1 busType:(unsigned long long)a2 force:(BOOL)a3 authScene:(unsigned long long)a4;
- (void)dealloc;
- (id)tryGetValidLocationFromCache;
- (void)cancelGetLocation;
- (void)onRetrieveLocationError:(int)a0;
- (void)onRetrieveLocationTimeOut:(id)a0;
- (void)onRetrieveLocationOK:(id)a0;
- (void)updateCacheLocation:(id)a0;
- (id)transferWrapFromCLLocaton:(id)a0;
- (id)getLocationCachesFromFile;
- (void)saveLocationCacheToLocal:(id)a0;
- (void).cxx_destruct;

@end
