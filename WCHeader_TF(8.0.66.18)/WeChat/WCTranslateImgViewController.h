@class WCImageTranslateLogic, NSString, UINavigationController, UIImage, MMImageBrowseView, UIView, MMUILabel;
@protocol WCTranslateImgViewControllerDelegate;

@interface WCTranslateImgViewController : PhotoViewController <MMImgageBrowseViewDelegate, MMScrollActionSheetDelegate, WCImageTranslateDelegate, UIViewControllerTransitioningDelegate> {
    UIImage *_translateImage;
}

@property (retain, nonatomic) MMImageBrowseView *browseView;
@property (retain, nonatomic) UIView *bottomBar;
@property (retain, nonatomic) UIView *brandContentView;
@property (retain, nonatomic) MMUILabel *brandLabel;
@property (copy, nonatomic) NSString *brandWording;
@property (nonatomic) BOOL isDisplayOriginImage;
@property (nonatomic) int ocrTransScene;
@property (retain, nonatomic) UIView *transitionBackView;
@property (nonatomic) BOOL popOrDismissWithFadeOutAnimation;
@property (nonatomic) double transitionDuration;
@property (retain, nonatomic) WCImageTranslateLogic *imgTranslateLogic;
@property (retain, nonatomic) UINavigationController *fromNavigationController;
@property (nonatomic) BOOL isChangeAlphaWithFullScreenItem;
@property (weak, nonatomic) id<WCTranslateImgViewControllerDelegate> delegate;
@property (retain, nonatomic) UIImage *originImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)setTranslateImage:(id)a0;
- (id)viewAtPage:(unsigned int)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)imageAtPage:(unsigned int)a0;
- (void)viewDidLoad;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)initBottomView;
- (void)onClickSavedPhotosAlbumButton;
- (void)onClickTranslateButton;
- (void)onClickCancelTranslateButton;
- (void)onClickChangeTranslateLanguageButton;
- (void)onClickTransalteFeedbackButton;
- (void)viewWillBePushed:(BOOL)a0;
- (void)handleViewWillBePoped:(BOOL)a0;
- (void)onReTranslateImage;
- (void)OnLongPress:(id)a0;
- (void)onScrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (void)onScrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragEnd;
- (void)onFullScreenItemChangeAlpha:(double)a0;
- (void)updateTranslateOpHidden:(BOOL)a0;
- (void)updateBottomBar;
- (void)viewDidLayoutSubviews;
- (void)onFullScreenItemDragToClose;
- (void)onSingleTap:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)mmNavigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void)animateFadeOutTransition:(id)a0;
- (void)scrollActionSheet:(id)a0 didSelecteItem:(id)a1;
- (id)getTranslateImgIdentifier:(id)a0;
- (void)onShowTranslateImage:(id)a0;
- (void).cxx_destruct;

@end
