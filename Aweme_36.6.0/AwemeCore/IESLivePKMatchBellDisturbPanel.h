@class UIButton, UIView;
@protocol IESLivePKAnchorBuilderAction;

@interface IESLivePKMatchBellDisturbPanel : IESLiveRevenueInteractPopupViewController

@property (retain, nonatomic) UIButton *rejectFlexActivityButton;
@property (retain, nonatomic) UIView *seperateLine;
@property (retain, nonatomic) UIButton *cancelButton;
@property (nonatomic) BOOL isClickedRejectButton;
@property (retain, nonatomic) id<IESLivePKAnchorBuilderAction> anchorBuilderAction;

- (void)onSetupNavBar:(id)a0;
- (void)trackPanelClicked:(unsigned long long)a0;
- (void)onClickedRejectButton;
- (void)onClickedCancelButton;
- (void)dismiss;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupViews;

@end
