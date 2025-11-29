@class UIStackView, AWEButton, IESServiceProvider, AWEDetailNaviBarModel, UILabel, AWECollectionButton, UIButton;

@interface AWEDetailNaviBar : UIView

@property (retain, nonatomic) AWEDetailNaviBarModel *object;
@property (nonatomic) BOOL animatingCollectButton;
@property (weak, nonatomic) IESServiceProvider *provider;
@property (retain, nonatomic) UIButton *naviBarCloseButton;
@property (retain, nonatomic) UILabel *naviBarTitleLabel;
@property (retain, nonatomic) UILabel *naviBarSubTitleLabel;
@property (retain, nonatomic) UIStackView *naviRightStackView;
@property (retain, nonatomic) AWECollectionButton *naviBarCollectButton;
@property (retain, nonatomic) AWEButton *naviBarTopRightEntranceButton;
@property (retain, nonatomic) UIButton *naviBarShareButton;
@property (retain, nonatomic) UIButton *topShareButton;
@property (retain, nonatomic) UIButton *activityEntryButton;

- (void)p_updateUIWithModel:(id)a0;
- (BOOL)titleAlwaysShow;
- (void)updateToModel:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 serviceProvider:(id)a1;
- (void)p_bindViewModel;
- (void)p_updateCollectButton:(id)a0;
- (void)p_configTopRightEntranceButtonImageWithModel:(id)a0;
- (void)clickedNaviBarShareButton:(id)a0;
- (void)clickedNaviBarCollectButton:(id)a0;
- (void)clickedNaviBarTopRightEntranceButton:(id)a0;
- (BOOL)collectNeverShow;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
