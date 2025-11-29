@class NSString, LocationRetriever;

@interface LocalJSEventHandler_getCurrentLocation : LocalJSEventHandler_BaseEvent <LocationRetrieveDelegate>

@property (retain, nonatomic) LocationRetriever *locationRetriever;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)handleJSEvent:(id)a0;
- (void)startRetrievingLocation;
- (void)onRetrieveLocationError:(int)a0;
- (void)onRetrieveLocationOK:(id)a0;
- (void)onRetrieveLocationTimeOut:(id)a0;
- (void).cxx_destruct;

@end
