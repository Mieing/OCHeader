@class MMUIButton, NSString, GetWxaGameConfigResponse_WxagGameReviewsConfig, MMUIView, UIView, MMWebImageView, MMUILabel;
@protocol WAGameReviewPopSheetDelegate;

@interface WAGameReviewPopSheet : MMObject <MMWebImageViewDelegate, CAAnimationDelegate> {
    NSString *_appId;
    unsigned int _appVersion;
    unsigned int _appState;
    MMUIView *_interactView;
    MMUIView *_sheetView;
    MMWebImageView *_badgeImgView;
    MMUILabel *_summaryLabel;
    MMUILabel *_detailLabel;
    MMUILabel *_commentLabel;
    MMUIButton *_closeButton;
    MMUIButton *_jumpButton;
    GetWxaGameConfigResponse_WxagGameReviewsConfig *_config;
}

@property (weak, nonatomic) UIView *parentView;
@property (weak, nonatomic) id<WAGameReviewPopSheetDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAppid:(id)a0 appVersion:(unsigned long long)a1 appState:(unsigned int)a2 Config:(id)a3;
- (void)showInView:(id)a0;
- (void)relayoutWhenResize;
- (void)dismissWithWithoutAnimation;
- (void)releaseViews;
- (double)sheetViewY;
- (double)sheetViewX;
- (double)sheetViewWidth;
- (double)sheetViewHeight;
- (void)addInteractView;
- (void)genSheetView;
- (id)closeButton;
- (id)jumpButton;
- (void)resetSheetViewCornerRadius;
- (void)animationDidStart:(id)a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)onClickCloseButton:(id)a0;
- (void)onClickJumpButton:(id)a0;
- (void)onLoadImageOK:(id)a0;
- (void)onLoadImageFail:(id)a0 extraInfo:(id)a1;
- (void).cxx_destruct;

@end
