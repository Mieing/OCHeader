@class HTSEventContext, NSTimer, IESLiveDraggableCardApi, IESLiveComponentContext, NSString, IESLiveDraggableCardView;
@protocol IESLiveRoomService;

@interface IESLiveDraggableCardStore : NSObject <HTSLiveMessageSubscriber, IESLiveDraggableCardViewDelegate>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLiveDraggableCardView *draggableCardView;
@property (retain, nonatomic) NSTimer *countDownTimer;
@property (retain, nonatomic) IESLiveDraggableCardApi *cardApi;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)showCard:(id)a0;
- (void)reportEvent:(id)a0 extra:(id)a1;
- (void)removeShutdownTimer;
- (void)delayRemoveCard:(id)a0;
- (void)removeCard:(id)a0 isFromMsg:(BOOL)a1;
- (void)didClosedView:(id)a0 closeType:(long long)a1;
- (void)didShowClosedView:(id)a0;
- (void)didClickedCardView:(id)a0;
- (void).cxx_destruct;
- (void)setup;
- (void)messageReceived:(id)a0;
- (id)initWithRoom:(id)a0;

@end
