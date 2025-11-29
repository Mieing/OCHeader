@class NSString, NSMutableDictionary, HTSEventContext, IESLiveComponentContext, NSMutableArray;
@protocol IESLiveRoomService, IESLiveBottomRightCardAction;

@interface IESLiveBottomRightCardStore : NSObject <HTSLiveMessageSubscriber, IESLiveBottomRightCardViewDelegate, IESLiveActivityModuleBottomRightCardInterface, IESLiveCommonCardStoreProtocol>

@property (nonatomic) double appearTime;
@property (retain, nonatomic) NSString *currentRoomID;
@property (retain, nonatomic) NSString *mseqChannelID;
@property (retain, nonatomic) NSMutableDictionary *cardViews;
@property (retain, nonatomic) id<IESLiveBottomRightCardAction> actionDispatcher;
@property (retain, nonatomic) NSMutableArray *businessCardAreas;
@property (nonatomic) long long interfaceOrientation;
@property (retain, nonatomic) NSMutableArray *waitCardAreas;
@property (retain, nonatomic) NSMutableDictionary *periodDisplayCardAreas;
@property (retain, nonatomic) NSMutableDictionary *delayDisplayCardAreas;
@property (nonatomic) double lastCardDestoryTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (weak, nonatomic) id<IESLiveRoomService> room;

- (void)didSetAttachingDIContext;
- (void)showCardView:(id)a0;
- (void)closeCardView:(id)a0;
- (void)showCardView:(id)a0 extraInfo:(id)a1;
- (void)fetchCommonCardInfo:(id)a0;
- (void)handleOrientationTranstionBegin:(long long)a0;
- (void)handleOrientationTranstionEnd:(long long)a0;
- (void)bottomRightCardData:(id)a0;
- (void)initCardData;
- (BOOL)needDelayHandleCardView:(id)a0;
- (void)handleCommonCardData:(id)a0;
- (void)handleBottomRightCardData:(id)a0 needFilterBusiness:(BOOL)a1;
- (void)refreshCardView:(id)a0;
- (void)closeBottomRightCardView:(id)a0 isFromMessage:(BOOL)a1;
- (BOOL)containsTypeViewAndRefresh:(id)a0;
- (void)handleShowedData:(BOOL)a0 cardType:(int)a1;
- (void)showBottomRightCard:(id)a0 isSuc:(BOOL)a1;
- (void)showBottomRightCard:(id)a0;
- (void)showPeriodDisplayCard:(id)a0;
- (void)showDelayedDisplayCard:(id)a0;
- (void)reportEvent:(id)a0 extra:(id)a1;
- (void)addExtraBottomRightCardData:(id)a0;
- (BOOL)isMeetShowCondition:(id)a0 reason:(id *)a1;
- (BOOL)isMeetMseqRoomShowCondition:(id)a0;
- (id)setupCardView:(id)a0;
- (void)didClosedCard:(int)a0 tapManual:(BOOL)a1;
- (void)didShowedCard:(int)a0;
- (void)showCardWithBusinessData:(id)a0;
- (void)didClosedView:(id)a0 tapManual:(BOOL)a1 closeReason:(long long)a2 durationTime:(double)a3;
- (void)didShowedView:(id)a0;
- (void)clickView:(id)a0 isPictureArea:(BOOL)a1;
- (void)hybirdDidLoadError:(id)a0 area:(id)a1 isFallbackUrl:(BOOL)a2 costTime:(double)a3;
- (void)willShowView:(id)a0 completion:(id /* block */)a1;
- (void)willCLoseView:(id)a0;
- (void)didHiddenView:(id)a0;
- (void).cxx_destruct;
- (void)setup;
- (void)messageReceived:(id)a0;
- (id)initWithRoom:(id)a0;

@end
