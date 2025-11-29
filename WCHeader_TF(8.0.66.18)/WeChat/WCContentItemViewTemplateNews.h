@class UILabel, WCBizAppReaderMessageBigPicViewModel, WCBizAppReaderMessageBigPicView, SightIconView, NSString, MMImageGridView, UIImageView;

@interface WCContentItemViewTemplateNews : WCContentItemBaseView <WCCanvasPageViewControllerDelegate, MMWebViewDelegate, WCImageViewDelegate, UIGestureRecognizerDelegate, WCForceTouchPreviewProtocol> {
    MMImageGridView *_imageGridView;
    UIImageView *_defaultImageView;
    UILabel *_titleLabel;
    UIImageView *_originIconView;
    UIImageView *_coverIconView;
    UILabel *_descLabel;
}

@property (retain, nonatomic) SightIconView *videoIconView;
@property (retain, nonatomic) WCBizAppReaderMessageBigPicView *bizAppBigPicView;
@property (retain, nonatomic) WCBizAppReaderMessageBigPicViewModel *bizAppBigPicViewModel;
@property (nonatomic) long long bizMpDispalyStyle;
@property (nonatomic) BOOL cardStyleOptimization;
@property (nonatomic) double targetMargin;
@property (nonatomic) double targetWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getTrimDesc:(id)a0;
+ (double)heightForMedia:(id)a0 showDetail:(BOOL)a1;
+ (double)heightForMedia:(id)a0 pageContext:(id)a1 showDetail:(BOOL)a2;

- (void)initViewsWithWCDataItem:(id)a0;
- (void)initTemplateNewsViewWithWCDataItem:(id)a0;
- (void)initBizAppBigPicViewWithViewModel:(id)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (BOOL)isAsk;
- (BOOL)isAISearch;
- (void)onFavoriteAdd:(id)a0;
- (void)addFavorite;
- (void)onShareToOpenSDK:(id)a0;
- (void)onLongTouch;
- (BOOL)canShowForwardMenuItem;
- (void)onTryNotShowTheUrlAgain:(id)a0;
- (void)confirmNotShowTheUrlAgain;
- (void)cancelNotShowTheUrlAgain;
- (void)layoutSubviews;
- (void)layoutBizAppBigPicViews;
- (void)layoutDefault;
- (void)onClickWCImage:(id)a0;
- (void)dealloc;
- (void)setHighlightedColor;
- (void)setNormalColor;
- (void)setNonInteractive;
- (void)onVoiceOverClick;
- (id)getVoiceOverStrForTimeline;
- (void)reportEcsData:(id)a0 dataItem:(id)a1;
- (void)throwUrlMessage;
- (void)internalOpenWebView:(id)a0 plainUrl:(id)a1 urlString:(id)a2 endOpInfo:(id)a3;
- (BOOL)canPeek;
- (id)viewControllerToPreviewWithFromController:(id)a0 forLocation:(struct CGPoint { double x0; double x1; })a1 inCoordinateView:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewingSourceRectForLocation:(struct CGPoint { double x0; double x1; })a0 inCoordinateView:(id)a1;
- (void)onCloseCanvasPageView;
- (void)reportLinkAdClickWithActionType:(long long)a0;
- (void)openShareAdCanvas:(id)a0 fromDetail:(BOOL)a1 dataItem:(id)a2;
- (void)notifyCanvasViewOutFullScreen:(id)a0;
- (void).cxx_destruct;

@end
