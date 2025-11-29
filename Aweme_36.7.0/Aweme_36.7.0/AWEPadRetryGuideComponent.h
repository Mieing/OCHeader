@class UILabel, UIView;
@protocol ACCRecorderViewContainer;

@interface AWEPadRetryGuideComponent : ACCFeatureComponent

@property (retain, nonatomic) UIView *guideContainer;
@property (retain, nonatomic) UILabel *guideLabel;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (nonatomic) BOOL hasLoaded;

- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (BOOL)isCurrentLandscape;
- (void).cxx_destruct;

@end
