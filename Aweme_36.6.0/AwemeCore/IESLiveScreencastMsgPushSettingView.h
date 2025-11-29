@class IESLiveScreencastMsgPushViewModel, NSArray, HTSEventContext, UILabel, UIView, MASConstraint;

@interface IESLiveScreencastMsgPushSettingView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *settingModesContainer;
@property (retain, nonatomic) NSArray *settingModes;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *detailTitle;
@property (retain, nonatomic) UIView *settingItemsContainer;
@property (retain, nonatomic) NSArray *settingItems;
@property (retain, nonatomic) MASConstraint *contentViewOffset;
@property (nonatomic) BOOL isSupportFloating;
@property (retain, nonatomic) IESLiveScreencastMsgPushViewModel *viewModel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) long long currentClickMode;
@property (nonatomic) long long currentClickType;
@property (nonatomic) BOOL isClickTypeAction;

- (double)animDuration;
- (void)makeConstraints;
- (void)showWithAnimation;
- (void)bindObservers;
- (void)applyCornerRadiusOnContentView;
- (id)descWithModeForTrack:(long long)a0;
- (id)descWithTypeForTrack:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1 isSupportFloating:(BOOL)a2;
- (void)loadCoverView;
- (void)makeNewConstraints;
- (void)handleButtonClickWithMode:(long long)a0 selected:(BOOL)a1;
- (void)setOn:(BOOL)a0 onSettingType:(long long)a1;
- (void)setAllModeSelected:(BOOL)a0;
- (void)setAllItemEnable:(BOOL)a0;
- (void)setSelected:(BOOL)a0 onSettingMode:(long long)a1;
- (BOOL)settingItemIsOn:(long long)a0;
- (void)setupNewUI;
- (double)contentHeight;
- (void)dismiss;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (void)setupUI;

@end
