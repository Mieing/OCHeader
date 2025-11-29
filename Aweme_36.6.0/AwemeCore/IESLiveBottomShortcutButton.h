@class HTSLiveGradientBackgroundView, IESLiveGCDTimer, UILabel, IESLiveBottomShortcutPresentComboView, UIImage;

@interface IESLiveBottomShortcutButton : IESLiveButton

@property (retain, nonatomic) UILabel *countDownLabel;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (retain, nonatomic) HTSLiveGradientBackgroundView *yellowView;
@property (retain, nonatomic) IESLiveBottomShortcutPresentComboView *comboView;
@property (nonatomic) long long countDownDefaultSeconds;
@property (nonatomic) long long countDownSeconds;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) double comboSize;
@property (nonatomic) BOOL greyMode;
@property (copy, nonatomic) id /* block */ onComboEnd;

- (id)initWithDIContext:(id)a0;
- (void)loadBackGroundImage:(id)a0;
- (id)generateGreyImage:(id)a0;
- (void)startCommonAnimation;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)clearImage;
- (void)reset;
- (void)setImageName:(id)a0;
- (void)setImageUrl:(id)a0;

@end
