@class AWEAwemeModel, AWEPickPanelTopBarViewModel, AWEPickPanelUserListContainerViewController, AWEPageContext, AWEPickPanelBottomViewModel, DUXPartialSheet, UIImageView, NSDictionary, NSString, AWEPickPanelTopBarView, AWEPickPanelBottomView;
@protocol AWEPlayInteractionBaseContextProtocol, AWEPlayInteractionContextProtocol, AWEPickPanelManagerDelegate;

@interface AWEPickPanelViewController : UIViewController <DUXPartialSheetDelegate>

@property (retain, nonatomic) AWEPickPanelUserListContainerViewController *userListVC;
@property (retain, nonatomic) AWEPickPanelTopBarView *topView;
@property (retain, nonatomic) AWEPickPanelBottomView *bottomView;
@property (weak, nonatomic) DUXPartialSheet *partialSheet;
@property (retain, nonatomic) UIImageView *panelBgImageView;
@property (nonatomic) double sheetHeight;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) AWEPageContext<AWEPlayInteractionBaseContextProtocol, AWEPlayInteractionContextProtocol> *context;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) id /* block */ pickStatusDidChangeBlock;
@property (copy, nonatomic) id /* block */ closePickPanelBlock;
@property (nonatomic) BOOL shouldShowBottomView;
@property (nonatomic) BOOL isPicked;
@property (nonatomic) long long pickCount;
@property (retain, nonatomic) AWEPickPanelTopBarViewModel *topBarViewModel;
@property (retain, nonatomic) AWEPickPanelBottomViewModel *bottomViewModel;
@property (weak, nonatomic) id<AWEPickPanelManagerDelegate> delegate;
@property (copy, nonatomic) NSString *itemID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)partialSheetDidDismiss:(id)a0;
- (void)partialSheet:(id)a0 didChangeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withUserInteraction:(BOOL)a2;
- (void)partialSheetDidClickMaskArea:(id)a0;
- (void)partialSheetDidDragToDismiss:(id)a0;
- (void)partialSheetWillDismiss:(id)a0;
- (BOOL)partialSheet:(id)a0 gestureRecognizerShouldBegin:(id)a1;
- (void)updatePickQuota:(long long)a0;
- (void)trackPickPanelVCShow;
- (void)loadPartialSheet;
- (void)trackPickPanelVCClose:(id)a0;
- (void)updateWithAwemeModel:(id)a0 context:(id)a1 params:(id)a2;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)show;
- (void)setupUI;
- (void)updateUI;
- (void)setupConfig;

@end
