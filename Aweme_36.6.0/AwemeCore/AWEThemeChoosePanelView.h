@class UIImageView, CAShapeLayer, UILabel, UIView, UIButton;
@protocol AWESettingSwitchProtocol, AWEThemeChoosePanelViewDelegate;

@interface AWEThemeChoosePanelView : UIView

@property (retain, nonatomic) UILabel *autoChooseLabel;
@property (retain, nonatomic) UIView<AWESettingSwitchProtocol> *autoChooseSwitch;
@property (retain, nonatomic) UILabel *commentSelectLabel;
@property (retain, nonatomic) UIView<AWESettingSwitchProtocol> *commentSelectSwitch;
@property (retain, nonatomic) UILabel *selectLabel;
@property (retain, nonatomic) UILabel *selectedItemTitleLabel;
@property (retain, nonatomic) UIView *middleLineView;
@property (retain, nonatomic) UIView *bottomLineView;
@property (retain, nonatomic) UIImageView *rightArrowImageView;
@property (retain, nonatomic) UIButton *selectedBtn;
@property (retain, nonatomic) UIView *topAutoBackView;
@property (retain, nonatomic) UIView *bottomSelectView;
@property (retain, nonatomic) UIView *commentSelectView;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (weak, nonatomic) id<AWEThemeChoosePanelViewDelegate> delegate;
@property (nonatomic) BOOL commentSwitchIsChanged;
@property (nonatomic) BOOL commentSwitchIsOn;

- (void)setUpTopAutoBackView;
- (void)setUpBottomSelectView;
- (void)setUpCommentSelectView;
- (void)selectBtnDidClick;
- (void)setBottomSelectViewHidden:(BOOL)a0 animation:(BOOL)a1;
- (void)setSelectItemTitle:(unsigned long long)a0;
- (void)autoChooseSwitchAction:(id)a0;
- (void)commentSelectSwitchAction:(id)a0;
- (void)checkLocalUserCustom;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)createUI;

@end
