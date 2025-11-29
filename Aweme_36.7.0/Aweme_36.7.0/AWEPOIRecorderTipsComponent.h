@class UILabel, UIView;
@protocol ACCRecorderViewContainer;

@interface AWEPOIRecorderTipsComponent : ACCFeatureComponent

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;

- (void)componentDidMount;
- (id)poiTipsModel;
- (void).cxx_destruct;

@end
