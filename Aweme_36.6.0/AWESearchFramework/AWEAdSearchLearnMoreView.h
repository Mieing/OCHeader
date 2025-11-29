@class UIColor, UIImageView, AWEAwemeModel, UILabel;

@interface AWEAdSearchLearnMoreView : UIView <AWEAdSearchLearnMoreView>

@property (retain, nonatomic) UIImageView *leftIcon;
@property (retain, nonatomic) UIImageView *rightArrow;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIColor *toColor;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;

- (BOOL)shouldShowSearchRewardCoin:(id)a0;
- (void)configWithAwemeModel:(id)a0;
- (BOOL)forceDarkMode;
- (BOOL)isLiveAppointmentType;
- (void)configAppointmentView;
- (BOOL)shouldShowWithNewStyle;
- (id)getCoinText:(id)a0;
- (id)textStrForAppointment;
- (void)handleAppointmentFlash;
- (void)flashLearnMoreView:(BOOL)a0;
- (void)configLiveVideoView;
- (BOOL)isLiveVideoType;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)accessibilityElements;
- (id)defaultBackgroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)setupSubviews;

@end
