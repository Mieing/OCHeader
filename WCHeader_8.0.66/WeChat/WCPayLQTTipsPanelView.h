@class UIButton, FinancialInfo, UIView;
@protocol WCPayWebImageViewDelegate, WCPayLQTTipsPanelViewDelegate;

@interface WCPayLQTTipsPanelView : UIView

@property (retain, nonatomic) FinancialInfo *financialInfo;
@property (weak, nonatomic) id<WCPayLQTTipsPanelViewDelegate, WCPayWebImageViewDelegate> delegate;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIButton *backButton;

- (id)initTipsPanelViewWithDelegate:(id)a0 lqtFinancialInfoData:(id)a1;
- (void)setupContentView;
- (void)onClickBackButton;
- (double)getContentViewHeight;
- (void)layoutContent;
- (void)layoutHeader:(id)a0;
- (double)layoutPureTextContentWithY:(double)a0 Height:(double)a1;
- (double)layoutStaticVideoWithY:(double)a0;
- (double)layoutVideoFeedWithY:(double)a0;
- (double)layoutBottomTips;
- (void)showInView:(id)a0;
- (void)handleTap;
- (void)confirmBtnClick;
- (void)dismiss;
- (BOOL)isPureTextHalfPage;
- (void)onVideoFeedThumbImageTap;
- (void)onStaticVideoThumbImageTap;
- (void)updateFinancialInfoData:(id)a0;
- (void).cxx_destruct;

@end
