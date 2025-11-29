@class UIButton, UILabel;
@protocol AWEAwemeOfflineBottomViewDidClickButtonDelegate;

@interface AWEAwemeOfflineBottomView : UIView

@property (retain, nonatomic) UIButton *settingButton;
@property (retain, nonatomic) UILabel *infoLabel;
@property (weak, nonatomic) id<AWEAwemeOfflineBottomViewDidClickButtonDelegate> delegate;

- (void)updateWithAweme:(id)a0;
- (void)clickEditButton;
- (void)resetLabelText;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
