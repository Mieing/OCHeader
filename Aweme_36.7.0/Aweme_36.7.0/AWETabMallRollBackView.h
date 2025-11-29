@class UIImageView, UIVisualEffectView, UIView, UILabel, UIButton;

@interface AWETabMallRollBackView : UIView

@property (nonatomic) BOOL hasWind;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UIView *subMaskView;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UIButton *action;
@property (nonatomic) long long styleType;
@property (copy, nonatomic) id /* block */ rollBackBlock;

- (void)updateRollBackTitle:(id)a0;
- (BOOL)hasPackUp;
- (void)packUp;
- (void)setupDefaultStyle;
- (void)setupCornerOptStyle;
- (void)setupTitleOptStyle;
- (void)rollBack:(id)a0;
- (void)packUpDefaultStyle;
- (void)packUpCornerOptStyle;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
