@class NSString;
@protocol IWALocationService;

@interface WAJSEventHandler_chooseLocation : WAJSEventHandler_BaseEvent <WALocationServiceDelegate>

@property (retain, nonatomic) id<IWALocationService> locationService;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } startCoord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)doNavigate;
- (void)openLocation:(id)a0;
- (void)onCancelChooseLocation;
- (void)onChooseLocation:(id)a0;
- (void).cxx_destruct;

@end
