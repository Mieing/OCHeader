@protocol ACCRecorderViewContainer;

@interface AWEECommerceRecordWidgetComponent : ACCFeatureComponent

@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;

- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)createWidget;
- (id)ecRecordModel;
- (void)addTipsButtonWithTips:(id)a0;
- (void)tipsButtonDidClicked;
- (void).cxx_destruct;

@end
