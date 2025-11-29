@class NSString;
@protocol IWALocationService;

@interface WAJSEventHandler_private_choosePoi : WAJSEventHandler_BaseEvent <WALocationServiceDelegate>

@property (retain, nonatomic) id<IWALocationService> locationService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)doNavigate;
- (void)openPoi:(id)a0;
- (void)onChoosePoiFinished:(id)a0;
- (void)onChoosePoiCancel;
- (void).cxx_destruct;

@end
