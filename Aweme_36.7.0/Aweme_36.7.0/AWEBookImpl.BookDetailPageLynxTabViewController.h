@class UIScrollView;

@interface AWEBookImpl.BookDetailPageLynxTabViewController : UIViewController <BDXContainerLifecycleProtocol, AWETabListItemViewControllerProtocol, UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ replyComment;
    void /* unknown type, empty encoding */ retrySendComment;
    void /* unknown type, empty encoding */ updateComment;
    void /* unknown type, empty encoding */ updateOperationState;
    void /* unknown type, empty encoding */ closePartialSheet;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ bdxView;
    void /* unknown type, empty encoding */ bridgeSubscriberList;
    void /* unknown type, empty encoding */ isFullScreen;
    void /* unknown type, empty encoding */ lynxRequestEndSetExtra;
    void /* unknown type, empty encoding */ $__lazy_storage_$_panGestureRecognizer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_panGestureView;
}

@property (nonatomic, retain) UIScrollView *tabScrollView;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } targetFrame;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (id)tabContentScrollView;
- (id)segmentedControlItemConfigForTabList:(id)a0;
- (void)didPan;
- (void)isCurrentSheetFullScreenWithNotice:(id)a0;
- (void)appWillResignActiveWithNotice:(id)a0;
- (void)appDidBecomeActiveWithNotice:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;

@end
