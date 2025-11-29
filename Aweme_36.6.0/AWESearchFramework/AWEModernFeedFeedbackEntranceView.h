@class AWEModernFeedActionButton, NSString, UIImageView, NSDictionary, UIView, AWEAwemeModel;

@interface AWEModernFeedFeedbackEntranceView : UIView <AWEFeedFeedbackEntranceProtocol>

@property (retain, nonatomic) UIImageView *feedbackImageView;
@property (nonatomic) double durationTime;
@property (retain, nonatomic) NSDictionary *feedbackTips;
@property (retain, nonatomic) AWEModernFeedActionButton *feedbackBtn;
@property (copy, nonatomic) id /* block */ trackFeedbackBtnTappedEventBlock;
@property (nonatomic) BOOL shouldShowFeedbackGuideView;
@property (retain, nonatomic) UIView *feedbackGuideView;
@property (retain, nonatomic) NSString *feedbackUrl;
@property (nonatomic) long long themeStyle;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)themeDidChange:(id)a0;
- (void)configUI;
- (void)didBecomeAccessibilityFocused;
- (void)showFeedbackGuideView;
- (id)feedbackButtonAndGuideViewRectToView:(id)a0;
- (void)showFeedbackView;
- (void)configGuideView;
- (void)hideFeedbackGuideView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addObserver;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)hideFeedbackView;

@end
