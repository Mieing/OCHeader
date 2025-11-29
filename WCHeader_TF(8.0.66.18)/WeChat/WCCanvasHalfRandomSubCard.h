@class WCCanvasComponent, WCFinderEmptyTipsView, WCCanvasComponentHalfRandomCardItemInfo, NSString, MMWebViewController, WCCanvasHalfRandomSubCardBulletCommentsView, WCAdvertiseInfo, UILabel;
@protocol WCCanvasComponentDelegate, WCCanvasHalfRandomSubCardDelegate;

@interface WCCanvasHalfRandomSubCard : UIView <MMWebViewDelegate, WCFinderEmptyTipsViewDelegate, WCCanvasHalfRandomSubCardBulletCommentsViewDelegate>

@property (weak, nonatomic) id<WCCanvasHalfRandomSubCardDelegate> delegate;
@property (retain, nonatomic) WCCanvasComponentHalfRandomCardItemInfo *itemInfo;
@property (retain, nonatomic) UILabel *preTitleView;
@property (retain, nonatomic) UILabel *titleView;
@property (retain, nonatomic) UILabel *descView;
@property (retain, nonatomic) WCCanvasComponent *contentItemComponent;
@property (retain, nonatomic) WCCanvasComponent *buttonItemComponent;
@property (retain, nonatomic) WCCanvasHalfRandomSubCardBulletCommentsView *bulletCommentsView;
@property (retain, nonatomic) MMWebViewController *webViewController;
@property (retain, nonatomic) WCFinderEmptyTipsView *emptyTipsView;
@property (retain, nonatomic) WCAdvertiseInfo *advertiseInfo;
@property (nonatomic) long long orientation;
@property (weak, nonatomic) id<WCCanvasComponentDelegate> componentDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 itemInfo:(id)a1 delegate:(id)a2 componentDelegate:(id)a3 advertiseInfo:(id)a4 orientation:(long long)a5;
- (void)prepareComponentsInfo;
- (void)initSubviews;
- (void)layoutSubviews;
- (id)generateSimpleLabelWithFont:(id)a0 textColor:(id)a1 text:(id)a2;
- (double)fetchLineHeightForText:(id)a0 maxWidth:(double)a1 font:(id)a2;
- (double)calcRealHeightFor:(double)a0;
- (void)setContentItemSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })getContentItemSizeWithHeightRemain:(double)a0;
- (struct CGSize { double x0; double x1; })calcBulletCommentsViewSizeWithMaxWidth:(double)a0;
- (void)setSubviewsHidden:(BOOL)a0;
- (void)showContentWithAnimation;
- (void)componentWillAppearInMainScreen:(BOOL)a0;
- (void)componentWillDisappearInMainScreen:(BOOL)a0;
- (void)componentAppearFactorChagneInMainScreen;
- (void)componentDidEnterBackground;
- (void)componentWillEnterForeground;
- (void)componentDidFullyAppearInMainScreen:(BOOL)a0;
- (void)componentWillResumeState:(BOOL)a0;
- (void)componentWillStopState:(BOOL)a0;
- (void)componentReportAddExposureCount;
- (void)resetSightViewAudioState:(BOOL)a0;
- (void)initWebView;
- (id)fetchRequestUrlWithUrl:(id)a0 andUpdateExtraInfo:(inout id)a1;
- (void)onWebViewDidReceiveResponse:(id)a0 Response:(id)a1;
- (void)onWebViewDidFinishLoad:(id)a0;
- (id)webViewFailToLoad:(id)a0 Error:(id)a1;
- (void)finderEmptyTipsView:(id)a0 didClickOnState:(unsigned long long)a1;
- (id)onSubCardBulletCommentsViewFetchCanvasPageId;
- (id)onSubCardBulletCommentsViewFetchCanvasItemCardId;
- (int)onSubCardBulletCommentsViewFetchCanvasFinderCommentScene;
- (BOOL)shouldShowBulletCommentsView;
- (id)fetchBulletCommentsTitle;
- (id)fetchBulletComments;
- (void).cxx_destruct;

@end
