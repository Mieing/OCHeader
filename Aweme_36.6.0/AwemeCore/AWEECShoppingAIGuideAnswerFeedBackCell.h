@class NSString, AWEECShoppingAIGuideFeedbackCard;

@interface AWEECShoppingAIGuideAnswerFeedBackCell : AWEECShoppingAIGuideAnswerBaseCell <AWEECShoppingAIGuideBaseCardDelegate>

@property (retain, nonatomic) AWEECShoppingAIGuideFeedbackCard *feedbackCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupCardWithModel:(id)a0;
- (void)reloadWithSingleMsgViewModel:(id)a0;
- (void)loadFeedbackCard:(id)a0;
- (void)cellCard:(id)a0 updateFeedBackLikeWithMsgID:(id)a1 isLike:(BOOL)a2;
- (void).cxx_destruct;

@end
