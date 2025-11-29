@class UIImageView, MMUILabel, WCRedesignButtonItem;
@protocol WCAccountBackDeviceFirstViewControllerDelegate;

@interface WCAccountBackDeviceFirstViewController : WCAccountBaseViewController {
    id<WCAccountBackDeviceFirstViewControllerDelegate> m_delegate;
}

@property (retain, nonatomic) UIImageView *weChatLogoImageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) WCRedesignButtonItem *useBothButtonItem;
@property (retain, nonatomic) WCRedesignButtonItem *iPadOnlyButtonItem;

- (id)init;
- (void)viewDidLoad;
- (BOOL)useSheetView;
- (BOOL)useRedesignStyle;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)viewWillAppear:(BOOL)a0;
- (void)didReceiveMemoryWarning;
- (void)onUseBothDevice;
- (void)onUseIPadOnly;
- (void)setDelegate:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;

@end
