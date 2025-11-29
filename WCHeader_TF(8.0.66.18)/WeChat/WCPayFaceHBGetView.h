@class WCPayWebImageView, MMUILabel, UIImageView, UIView, WCPayFaceHBItem, UIButton;
@protocol WCPayFaceHBGetViewDelegate, MMUIViewControllerDelegate;

@interface WCPayFaceHBGetView : UIView <IWCPayFaceHBMgrExt> {
    id<WCPayFaceHBGetViewDelegate> m_delegate;
    id<MMUIViewControllerDelegate> m_vcDelegate;
    UIImageView *_backgroundView;
    UIView *_searchView;
    WCPayWebImageView *_imageView;
    UIButton *_historyBtn;
    UIView *_receiveView;
    UIImageView *_hbView;
    UIView *_resultView;
    MMUILabel *_nameView;
    UIButton *_btnDone;
    MMUILabel *_descView;
    UIImageView *_decorationView;
    WCPayFaceHBItem *m_currentItem;
    UIView *oBottomTailView;
    UIView *oTopHeaderView;
    UIView *topView;
    UIImageView *topImageView;
    UIImageView *topImageBackgroundView;
    UIView *bottomView;
    UIImageView *bottomImageView;
    UIView *_blurView;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (void)setViewController:(id)a0;
- (void)addImageView;
- (void)setBackgroundImage:(id)a0;
- (void)popupView:(id)a0;
- (void)popbackView:(id)a0;
- (void)removeView:(id)a0;
- (void)receiveHB:(id)a0;
- (void)setAnchorPoint:(struct CGPoint { double x0; double x1; })a0 forView:(id)a1;
- (void)showSuccessOpenAnimation;
- (void)fadeAnimation:(double)a0;
- (void)commitPopBackAnimation;
- (void)onGet;
- (void)onCancelOpen;
- (void)setDelegate:(id)a0;
- (void)removeBlurView;
- (void)updateFaceHB:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
