@class IESLivePublicScreenFixedCardItem, IESLivePSComponentConfigModel, UIView, IESLiveRightBottomMutuallyExclusiveItem;

@interface IESLiveFeedbackCardPublicScreenType : IESLiveFeedbackCard

@property (retain, nonatomic) IESLiveRightBottomMutuallyExclusiveItem *rightBottomItem;
@property (retain, nonatomic) UIView *mutuallyExclusiveItemInsertView;
@property (nonatomic) BOOL isInDismissAnimateProcess;
@property (retain, nonatomic) IESLivePublicScreenFixedCardItem *cardItem;
@property (retain, nonatomic) IESLivePSComponentConfigModel *configModel;

- (id)lynxURL;
- (void)showFeedbackCard;
- (void)removeFeedbackCard;
- (void)updateFeedbackCardSize;
- (void)addFeedbackCardIntoContainer;
- (void)removeFeedbackCardFromContainer:(BOOL)a0;
- (void)trackShowDuration:(BOOL)a0;
- (void)dismissAnimated;
- (void).cxx_destruct;
- (id)fallbackURL;
- (id)cardType;

@end
