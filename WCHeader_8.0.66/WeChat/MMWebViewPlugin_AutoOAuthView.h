@class UIButton, IndicatorAnimationBallBeatView, MMWebImageView, UILabel, UIView;

@interface MMWebViewPlugin_AutoOAuthView : MMWebViewPluginBase {
    UIView *_bgView;
    MMWebImageView *_headImageView;
    UILabel *_titleLabel;
    IndicatorAnimationBallBeatView *_indicatorView;
    UILabel *_descLabel;
    UIButton *_backAppBtn;
    BOOL _bIsSuccessView;
}

- (BOOL)handleEvent:(unsigned long long)a0 userInfo:(id)a1;
- (void)showAutoOAuthLoadingViewWithSchemeUrl:(id)a0 Success:(BOOL)a1 Wording:(id)a2 HeadImgUrl:(id)a3;
- (void)initViewWithWording:(id)a0 HeadImgUrl:(id)a1;
- (void)layoutAutoOAuthView;
- (void)onBackToApp;
- (void)hideAutoOAuthLoadingView;
- (void).cxx_destruct;

@end
