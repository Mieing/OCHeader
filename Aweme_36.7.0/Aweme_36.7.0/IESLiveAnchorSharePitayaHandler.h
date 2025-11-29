@class IESLiveGCDTimer;
@protocol IESLiveRoomService;

@interface IESLiveAnchorSharePitayaHandler : NSObject

@property (retain, nonatomic) IESLiveGCDTimer *guideTimer;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (copy, nonatomic) id /* block */ shareGuideTypeProvider;
@property (copy, nonatomic) id /* block */ didTappedGuideItem;
@property (copy, nonatomic) id /* block */ displayGroupItem;
@property (copy, nonatomic) id /* block */ trackShareGuide;

- (void)startProcess;
- (void)stopProcess;
- (void)registerPitayaMessageHandler;
- (id)handlePitayaMessage:(id)a0;
- (void)removePitayaMessageHandler;
- (void)hideShareGuide;
- (void)stopGuideTimer;
- (id)handleGetDecisionParamsWith:(id)a0;
- (id)handleTriggerGuideShowWith:(id)a0;
- (void)showShareGuideWith:(id)a0;
- (void)trackShareGuideWithShow:(BOOL)a0 eventParams:(id)a1;
- (void)displayGroupItemWith:(BOOL)a0;
- (void)insertToolbarItemWith:(id)a0 eventParams:(id)a1;
- (void)setupGuideTimerWith:(id)a0;
- (id)pitayaTrackParamsWith:(id)a0;
- (void).cxx_destruct;
- (void)removeToolbarItem;

@end
