@class UILabel, HTSLiveAmazingBackgroundView, CAGradientLayer;

@interface AWELiveStreamingTagView : UIView

@property (retain, nonatomic) UILabel *defaultLabel;
@property (retain, nonatomic) HTSLiveAmazingBackgroundView *gradientBackgroundView;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;

- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
