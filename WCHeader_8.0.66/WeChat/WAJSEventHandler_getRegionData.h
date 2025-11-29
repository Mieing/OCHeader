@class NSString;
@protocol IWALocationService;

@interface WAJSEventHandler_getRegionData : WAJSEventHandler_BaseEvent <WALocationServiceDelegate>

@property (retain, nonatomic) id<IWALocationService> locationService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)onGetRegionData:(id)a0;
- (void).cxx_destruct;

@end
