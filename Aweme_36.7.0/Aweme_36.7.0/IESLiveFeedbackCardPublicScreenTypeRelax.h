@class UIView, HTSEventContext, NSString, HTSLiveFeedbackCard, IESLiveRoomPublishScreenFeedbackSwift, NSDictionary, IESLiveRightBottomMutuallyExclusiveItem, IESLivePSComponentConfigModel, IESLivePublicScreenFixedCardItem;

@interface IESLiveFeedbackCardPublicScreenTypeRelax : NSObject <IESLiveFeedbackCardLayoutProtocol>

@property (retain, nonatomic) IESLiveRightBottomMutuallyExclusiveItem *rightBottomItem;
@property (retain, nonatomic) UIView *mutuallyExclusiveItemInsertView;
@property (nonatomic) BOOL isInDismissAnimateProcess;
@property (retain, nonatomic) IESLivePublicScreenFixedCardItem *cardItem;
@property (retain, nonatomic) IESLivePSComponentConfigModel *configModel;
@property (retain, nonatomic) IESLiveRoomPublishScreenFeedbackSwift *feedbackSwift;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (retain, nonatomic) UIView *relaxContainer;
@property (retain, nonatomic) HTSLiveFeedbackCard *feedbackModel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) NSDictionary *feedbackData;
@property (nonatomic) double lightFeedbackCardShowTime;
@property (nonatomic) double hybridContainerHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)postUserFeedbackCardIShow;
- (void)loadHybridContainer;
- (void)showFeedbackCard;
- (void)removeFeedbackCard;
- (id)initWithFeedbackData:(id)a0 extraParams:(id)a1 trackContext:(id)a2;
- (void)addFeedbackCardIntoContainer;
- (void)removeFeedbackCardFromContainer:(BOOL)a0;
- (void)trackShowDuration:(BOOL)a0;
- (void)handleHeightChangeNotification:(id)a0;
- (void)dismissAnimated;
- (void).cxx_destruct;
- (void)dealloc;
- (id)cardType;
- (id)questionText;

@end
