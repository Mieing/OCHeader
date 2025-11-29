@class MMLoadingView, NSString, WCActionSheet, UIImage, MMImageBrowseView, CMessageWrap;
@protocol ImageBrowseDelegate;

@interface MsgImageBrowseViewController : MMUIViewController <IMsgRevokeExt, MMImgageBrowseViewDelegate, WCActionSheetDelegate, UIViewControllerAnimatedTransitioning> {
    MMImageBrowseView *m_imageView;
    CMessageWrap *m_wrapMsg;
    id<ImageBrowseDelegate> m_delegate;
    MMLoadingView *m_loadingView;
    WCActionSheet *m_actionSheet;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } m_originRect;
}

@property (retain, nonatomic) UIImage *m_image;
@property (retain, nonatomic) id m_singleTapGesture;
@property (retain, nonatomic) id m_doubleTapGesture;
@property (nonatomic) BOOL m_saveMode;
@property (nonatomic) BOOL m_bSupportLocateToMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)adjustImageViewRect;
- (void)hideStatusBar;
- (void)showStatusBar;
- (void)handleViewWillAppear;
- (void)handleViewWillDisappear;
- (void)addNvGestureRecognizer;
- (void)removeNvGestureRecognizer;
- (void)setFullScreen:(BOOL)a0;
- (void)exitFullScreen;
- (void)GetImage;
- (id)genDataLength:(unsigned int)a0;
- (void)initNavigationBar;
- (void)initImageView;
- (void)initData;
- (void)initView;
- (void)viewDidLoad;
- (void)viewWillBePoped:(BOOL)a0;
- (void)viewWillBeInteractivePoped;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)willAppear;
- (void)viewDidAppear:(BOOL)a0;
- (void)didAppear;
- (id)initWithMsgWrap:(id)a0 originFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)dealloc;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)onSingleTapOnNavigationBar:(id)a0;
- (void)onDouTapOnNavigationBar:(id)a0;
- (void)onOperate:(id)a0;
- (void)onSavedPhotosAlbum:(id)a0;
- (void)onSingleTapImageBrowseView;
- (void)onLongPress;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)OnMsgRevoked:(id)a0 n64MsgId:(long long)a1;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void)animateTransition:(id)a0 fromVC:(id)a1 toVC:(id)a2 fromView:(id)a3 toView:(id)a4;
- (void)animateShowWithOriginRectInScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)mmNavigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (void).cxx_destruct;

@end
