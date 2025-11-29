@class NSCache, NSString, WCFinderGetLocationToken, LocationRetriever, NSMutableArray, WCFinderCachedLocation, CLLocation, WCFinderMMKVKeyModel;
@protocol WCFinderLocationManagerDelegate;

@interface WCFinderLocationManager : NSObject <LocationRetrieveDelegate, ILocationMgrExt>

@property (retain, nonatomic) LocationRetriever *locationRetriever;
@property (retain, nonatomic) CLLocation *currentLocation;
@property (nonatomic) double currentLocationTimestamp;
@property (nonatomic, getter=isUpdating) BOOL updating;
@property (nonatomic, getter=isDebugOn) BOOL debugOn;
@property (retain, nonatomic) CLLocation *debugLocation;
@property (retain, nonatomic) NSCache *locationCodeCache;
@property (retain, nonatomic) WCFinderGetLocationToken *token;
@property (retain) NSMutableArray *complectionArray;
@property (nonatomic) double enterBackgroundTimestamp;
@property (retain, nonatomic) WCFinderMMKVKeyModel *mmkv;
@property (weak, nonatomic) id<WCFinderLocationManagerDelegate> delegate;
@property (retain, nonatomic) WCFinderCachedLocation *cachedMapLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMMKV:(id)a0;
- (void)dealloc;
- (void)loadCacheMapLocation;
- (void)storeCahceMapLocationToMMKV;
- (void)setupLocationRetriever;
- (void)startRetrieveLocationFor:(unsigned long long)a0 requiredMapLocation:(BOOL)a1;
- (void)observeEnterForeground;
- (void)observeEnterBackground;
- (id)cachedLocation;
- (id)getLocationFor:(unsigned long long)a0 withCompletion:(id /* block */)a1 failed:(id /* block */)a2;
- (id)getMapLocationFor:(unsigned long long)a0 withCompletion:(id /* block */)a1 failed:(id /* block */)a2;
- (BOOL)getCodeFromLocation:(id)a0 completion:(id /* block */)a1 failed:(id /* block */)a2;
- (BOOL)setLocationDebugOn:(BOOL)a0 debugLocation:(id)a1;
- (BOOL)isLocationDebugOn;
- (BOOL)isLocationServiceAuthrizedFor:(unsigned long long)a0;
- (void)overTimeAction;
- (BOOL)stopUpdateRealTimeLocation;
- (id)locationKeyWithLatitude:(double)a0 longitude:(double)a1;
- (void)onRetrieveLocationOK:(id)a0;
- (void)onRetrieveLocationTimeOut:(id)a0;
- (void)onRetrieveLocationCallbackTimeOut:(id)a0;
- (void)onRetrieveLocationError:(int)a0;
- (void)registerLocationServiceAuthorizationStatusListener;
- (void)requestAuthorizationFor:(unsigned long long)a0;
- (void)unregisterLocationServiceAuthorizationStatusListener;
- (void)onLocationAuthorizationStatusUpdatedWithAccuracyAuthorization:(long long)a0;
- (void).cxx_destruct;

@end
