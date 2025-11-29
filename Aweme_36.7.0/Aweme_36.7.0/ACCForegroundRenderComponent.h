@class BEFView, NSString;
@protocol ACCRecordPropService, ACCRecorderViewContainer, ACCCameraService;

@interface ACCForegroundRenderComponent : ACCFeatureComponent <BEFViewDelegate>

@property (retain, nonatomic) BEFView *view;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (nonatomic) BOOL appeared;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)componentDidDisappear;
- (void)loadComponentView;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)p_hideView;
- (void)handleViewWithSticker:(id)a0;
- (void)p_showViewForEffect:(id)a0;
- (void)p_addObserverForView:(id)a0;
- (BOOL)msgProc:(unsigned int)a0 arg1:(long long)a1 arg2:(long long)a2 arg3:(const char *)a3;
- (void).cxx_destruct;
- (void)dealloc;

@end
