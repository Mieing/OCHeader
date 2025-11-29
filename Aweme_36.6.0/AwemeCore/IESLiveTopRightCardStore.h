@class NSString, NSMutableDictionary, HTSEventContext, IESLiveComponentContext;
@protocol IESLiveTopRightCardAction, IESLiveRoomService;

@interface IESLiveTopRightCardStore : NSObject <HTSLiveMessageSubscriber, IESLiveTopRightCardViewDelegate, IESLiveActivityModuleTopRightCardInterface, IESLiveCommonCardStoreProtocol>

@property (retain, nonatomic) NSMutableDictionary *cardViews;
@property (retain, nonatomic) id<IESLiveTopRightCardAction> actionDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (weak, nonatomic) id<IESLiveRoomService> room;

- (void)didSetAttachingDIContext;
- (void)trackEvent:(id)a0 extra:(id)a1;
- (void)showCardView:(id)a0;
- (void)closeCardView:(id)a0;
- (void)addQualificationToolbarItem;
- (void)fetchCommonCardInfo:(id)a0;
- (BOOL)needDelayHandleCardView:(id)a0;
- (void)handleCommonCardData:(id)a0;
- (void)refreshCardView:(id)a0;
- (void)didShowedView:(id)a0;
- (void)topRightCardData:(id)a0;
- (void)handleTopRightCardData:(id)a0 needFilterBusiness:(BOOL)a1;
- (void)showTopRightCard:(id)a0;
- (void)closeTopRightCardView:(id)a0;
- (void)closedAllCardViews;
- (void)didClosedView:(id)a0;
- (void)willShowView:(id)a0;
- (void)willCloseView:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;
- (id)initWithRoom:(id)a0;

@end
