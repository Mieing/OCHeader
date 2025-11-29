@class MMUILabel, NSString, MMUIView, UIView, MMUIButton, WAProfileRatingView;
@protocol WAEvaluatePopSheetDelegate;

@interface WAEvaluatePopSheet : MMObject {
    NSString *_appId;
    NSString *_weAppName;
    MMUIView *_interactView;
    WAProfileRatingView *_ratingView;
    MMUIView *_evaluteWhiteView;
    MMUIView *_wechatLogoView;
    MMUILabel *_descLabel;
    MMUILabel *_ratingTipsLabel;
    MMUIButton *_commitButton;
    BOOL _bScoreChanged;
}

@property (weak, nonatomic) UIView *parentView;
@property (weak, nonatomic) id<WAEvaluatePopSheetDelegate> delegate;

- (id)initWithAppid:(id)a0 WeAppName:(id)a1;
- (void)_releaseViews;
- (void)relayoutWhenResize;
- (void)resetEvaluateViewCornerRadius;
- (double)evaluateViewWidth;
- (void)showInView:(id)a0;
- (void)dismissWithWithoutAnimation;
- (void)genEvaluateWhiteView;
- (id)genWechatLogoView;
- (void)addInteractView;
- (void)onEvaluateScoreChanged:(id)a0;
- (id)getInviteTextWithTruncateWithFont:(id)a0;
- (void)onCloseButtonClick;
- (void)onInteractViewTap;
- (void)onCommitButtonClicked;
- (void).cxx_destruct;

@end
