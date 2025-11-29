@class IESLiveRightBottomMutuallyExclusiveItem, HTSLiveBattleFeedBackCardMessage;

@interface IESLiveFeedbackCardPKType : IESLiveFeedbackCard

@property (retain, nonatomic) IESLiveRightBottomMutuallyExclusiveItem *rightBottomItem;
@property (retain, nonatomic) HTSLiveBattleFeedBackCardMessage *feedbackCardMessage;
@property (nonatomic) BOOL firstTimeShow;

- (id)lynxURL;
- (id)initWithFeedbackCardMessage:(id)a0 trackContext:(id)a1;
- (void)showFeedbackCard;
- (void)removeFeedbackCard;
- (void)updateFeedbackCardSize;
- (void)trackShowDuration;
- (void)dismissAnimated;
- (void).cxx_destruct;
- (id)fallbackURL;
- (id)questionText;
- (id)feedbackData;

@end
