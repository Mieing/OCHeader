@class UIView;
@protocol ACCEditViewContainer;

@interface AWECommentTopBackgroundComponent : ACCFeatureComponent

@property (retain, nonatomic) UIView *backGroundView;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;

- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void).cxx_destruct;

@end
