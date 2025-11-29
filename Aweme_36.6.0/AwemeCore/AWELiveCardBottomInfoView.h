@class UIView, UIStackView, AWEVSCellViewModel, AWELiveRoomModel, UIButton, IESLiveButton, AWELiveVSFormatTagView, UILabel;

@interface AWELiveCardBottomInfoView : UIView

@property (retain, nonatomic) UIView *livingAnimationView;
@property (retain, nonatomic) UILabel *livingTextLabel;
@property (retain, nonatomic) UIView *leftLineView;
@property (retain, nonatomic) UIView *rightLineView;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UIView *aniView;
@property (retain, nonatomic) AWEVSCellViewModel *viewModel;
@property (retain, nonatomic) AWELiveRoomModel *roomModel;
@property (retain, nonatomic) IESLiveButton *followBtn;
@property (copy, nonatomic) id /* block */ nameTap;
@property (retain, nonatomic) UIButton *nameBtn;
@property (retain, nonatomic) AWELiveVSFormatTagView *tagView;
@property (retain, nonatomic) UILabel *episodePurchaseInfoLabel;
@property (retain, nonatomic) UIView *liveStatusTipsView;
@property (retain, nonatomic) UIStackView *stackView;

- (id)createFollowButton;
- (void)playFollowAnimation;
- (void)updateWithTagType:(long long)a0;
- (id)createInfoLabel;
- (id)createNameButton;
- (id)createLivingView;
- (void)nameTapped:(id)a0;
- (id)createStackView;
- (id)createLiveAnimationView;
- (id)createLivingLabel;
- (id)createLargeFontView:(id)a0;
- (id)createButtonBackgroudView:(id)a0;
- (id)createBreathAnimationView:(id)a0;
- (id)createLivingView:(id)a0;
- (id)createBreathView;
- (void)updateWithName:(id)a0 info:(id)a1;
- (void)updateLivingText:(id)a0 isLiving:(BOOL)a1;
- (void)updateStyleWithViewModel:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateInfo:(id)a0;

@end
