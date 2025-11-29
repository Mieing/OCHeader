@class AWEECShoppingAIGuideMessageSingleFeedBackViewModel, UIImageView, UILabel, UIView;

@interface AWEECShoppingAIGuideFeedbackCard : AWEECShoppingAIGuideBaseCard

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *likeView;
@property (retain, nonatomic) UIImageView *likeImageView;
@property (retain, nonatomic) UILabel *likeLabel;
@property (retain, nonatomic) UIView *feedbackView;
@property (retain, nonatomic) UIImageView *feedbackImageView;
@property (retain, nonatomic) UILabel *feedbackLabel;
@property (retain, nonatomic) AWEECShoppingAIGuideMessageSingleFeedBackViewModel *feedbackCardModel;

- (void)setupUIWithModel:(id)a0;
- (void)updateFeedbackStatusWithSelected:(BOOL)a0;
- (void)updateLikeStatusWithSelected:(BOOL)a0;
- (id)getFeedbackRequestParams;
- (id)fallbackSchemaSetting;
- (void)selectLikeViewUI;
- (void)resetFeedbackViewUI;
- (void)resetLikeViewUI;
- (void)selectFeedbackViewUI;
- (void)tapLikeView:(id)a0;
- (void)tapFeedbackView:(id)a0;
- (void).cxx_destruct;

@end
