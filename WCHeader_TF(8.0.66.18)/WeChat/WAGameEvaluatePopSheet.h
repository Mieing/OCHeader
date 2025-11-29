@class GetWxaGameConfigResponse_WxagGameOriginalReviewConfig, NSString, UIImageView, MMUIView, UIView, MMUIButton, MMUILabel;
@protocol WAGameEvaluatePopSheetDelegate;

@interface WAGameEvaluatePopSheet : MMObject <CAAnimationDelegate> {
    NSString *_appId;
    NSString *_weAppName;
    MMUIView *_interactView;
    MMUIView *_sheetView;
    MMUIButton *_closeButton;
    MMUILabel *_titleLabel;
    MMUILabel *_questionLabel;
    MMUIView *_optionView;
    UIImageView *_thanksView;
    MMUILabel *_thanksLabel;
    unsigned int _choseOption;
    GetWxaGameConfigResponse_WxagGameOriginalReviewConfig *_config;
}

@property (weak, nonatomic) UIView *parentView;
@property (weak, nonatomic) id<WAGameEvaluatePopSheetDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAppid:(id)a0 WeAppName:(id)a1 Config:(id)a2;
- (void)showInView:(id)a0;
- (void)relayoutWhenResize;
- (void)dismissWithWithoutAnimation;
- (void)releaseViews;
- (double)sheetViewWidth;
- (void)addInteractView;
- (void)genSheetView;
- (id)genOptionView;
- (id)genOptionButtonWithIndex:(unsigned int)a0;
- (id)closeButton;
- (void)resetSheetViewCornerRadius;
- (void)showThanksView;
- (void)setThanksViewAnimation;
- (void)animationDidStart:(id)a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)onClickCloseButton:(id)a0;
- (void)onClickOptionButton:(id)a0;
- (void).cxx_destruct;

@end
