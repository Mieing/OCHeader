@class NSString, NSMutableArray, LocationRetriever;

@interface FlutterLocationPlugin : NSObject <MMFlutterPlugin, MMLocationNativeApi, LocationRetrieveDelegate> {
    LocationRetriever *_locationRetriever;
    NSMutableArray *_requestQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (id)convertWGS84LocationToGCJ02LocationInfo:(id)a0 error:(id *)a1;
- (void)getUserCurrentLocationAuthScene:(long long)a0 locationGeoMode:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)startRetrieveLocation:(long long)a0 locationGeoMode:(unsigned long long)a1;
- (void)onRetrieveLocationOK:(id)a0;
- (void)onRetrieveLocationCallbackTimeOut:(id)a0;
- (void)onRetrieveLocationTimeOut:(id)a0;
- (void)onRetrieveLocationError:(int)a0;
- (void).cxx_destruct;

@end
