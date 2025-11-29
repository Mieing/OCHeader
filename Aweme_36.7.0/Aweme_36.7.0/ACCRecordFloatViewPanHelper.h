@class NSString, NSMutableSet, ACCRecordFloatViewPanHelperConfig, UIPanGestureRecognizer, NSValue;
@protocol ACCRecorderViewContainer, ACCSideslipPropPanelService;

@interface ACCRecordFloatViewPanHelper : NSObject <ACCPanelViewDelegate, ACCSideslipPropPanelServiceSubscriber>

@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (retain, nonatomic) ACCRecordFloatViewPanHelperConfig *config;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) NSMutableSet *avoidPanelKeys;
@property (retain, nonatomic) NSValue *panViewFrameBeforeSideSlipPanelShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sideslipPropPanelService:(id)a0 willShowTrayView:(id)a1;
- (void)sideslipPropPanelService:(id)a0 willDismissTrayView:(id)a1;
- (void)addGesture;
- (void)updatePanViewCenterWithTranslation:(struct CGPoint { double x0; double x1; })a0;
- (void)edgeSnappingPanViewIfNeeded;
- (double)bottomThreshold;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)handlePanGesture:(id)a0;
- (void)addObservers;

@end
