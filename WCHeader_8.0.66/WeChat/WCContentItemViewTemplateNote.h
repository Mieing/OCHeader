@class NSString, UIImageView, MMImageGridView, UILabel;

@interface WCContentItemViewTemplateNote : WCContentItemBaseView <WCCanvasPageViewControllerDelegate, MMWebViewDelegate, WCImageViewDelegate, UIGestureRecognizerDelegate, WCForceTouchPreviewProtocol> {
    MMImageGridView *_imageGridView;
    UIImageView *_defaultImageView;
    UILabel *_titleLabel;
    UIImageView *_originIconView;
    UILabel *_descLabel;
}

@property (nonatomic) BOOL cardStyleOptimization;
@property (nonatomic) double targetMargin;
@property (nonatomic) double targetWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getTrimDesc:(id)a0;
+ (double)heightForMedia:(id)a0 showDetail:(BOOL)a1;

- (void)initViewsWithWCDataItem:(id)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)onFavoriteAdd:(id)a0;
- (void)addFavorite;
- (void)onLongTouch;
- (void)layoutSubviews;
- (void)onClickWCImage:(id)a0;
- (void)dealloc;
- (void)setHighlightedColor;
- (void)setNormalColor;
- (void)setNonInteractive;
- (void)onVoiceOverClick;
- (id)getVoiceOverStrForTimeline;
- (void)throwUrlMessage;
- (BOOL)canPeek;
- (id)viewControllerToPreviewWithFromController:(id)a0 forLocation:(struct CGPoint { double x0; double x1; })a1 inCoordinateView:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewingSourceRectForLocation:(struct CGPoint { double x0; double x1; })a0 inCoordinateView:(id)a1;
- (void)onCloseCanvasPageView;
- (void)onShareToOpenSDK:(id)a0;
- (void).cxx_destruct;

@end
