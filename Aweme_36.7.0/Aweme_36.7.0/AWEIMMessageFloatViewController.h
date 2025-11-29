@class NSString, AWEIMMessageFloatNavigationBar;
@protocol AWEIMMessageFloatViewControllerDelegate;

@interface AWEIMMessageFloatViewController : AWEIMMessageBaseViewController <BTMPageManagableProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMMessageFloatNavigationBar *floatNaviBar;
@property (nonatomic) BOOL isSevenSpliteScreen;
@property (weak, nonatomic) id<AWEIMMessageFloatViewControllerDelegate> delegate;

- (BOOL)btm_autoManaged;
- (id)btm_pageIdentifier;
- (void)p_updateLayout;
- (void)didUpdateInputVCFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inputViewType:(long long)a1 oldInputViewType:(long long)a2;
- (void)updateLayoutWithTransformToFull:(BOOL)a0;
- (id)initWithIsSevenSpliteScreen:(BOOL)a0;
- (BOOL)isWrapperByContainerVC;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })messageListVCAvailableFrame;
- (void)didTransferToFullViewController;
- (void)updateLayoutWithHeightChangedOffset:(double)a0;
- (double)__messageListViewAvailableHeight;
- (double)inputActionBarHeightWithInputType:(long long)a0;
- (double)getGiphyReplyViewHeight;
- (double)p_inputActionBarHeight;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;

@end
