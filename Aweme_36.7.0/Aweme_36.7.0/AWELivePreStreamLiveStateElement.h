@class AWELiveRoomModel, NSString;

@interface AWELivePreStreamLiveStateElement : AWELiveBaseElement <AWELivePreStreamMessageSubscriber>

@property (retain, nonatomic) AWELiveRoomModel *roomModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewController_viewWillAppear;
- (void)preloadElement;
- (void)onMessageReceivce:(id)a0 withDict:(id)a1;
- (void)configure;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;

@end
