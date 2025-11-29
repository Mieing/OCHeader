@class IESLiveMultiOrderSingAIMVManager, HTSEventContext, IESLiveMultiOrderSingCustomizeMVManager, IESLiveMultiOrderSingApi, NSString;
@protocol IESLiveRoomService;

@interface IESLiveMultiOrderSingMVManagerAdapter : NSObject <IESLiveMultiOrderSingMVManagerDelegate>

@property (retain, nonatomic) IESLiveMultiOrderSingCustomizeMVManager *customizeMVManager;
@property (retain, nonatomic) IESLiveMultiOrderSingAIMVManager *aiMVManager;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveMultiOrderSingApi *api;
@property (copy, nonatomic) id /* block */ didStartAction;
@property (copy, nonatomic) id /* block */ didStopAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithRoom:(id)a0 trackContext:(id)a1;
- (void)openMVSelectPanelWithItemID:(id)a0;
- (void)handleMVWRDSReceived:(id)a0;
- (void)restartMVBackgroundIfNeed;
- (void)fetchOrderSingPlayModeInfoIfNeed;
- (void)handlePlayModeInfo:(id)a0;
- (void)handleOrderSingMessage:(id)a0;
- (void)multiOrderSingMVManager:(id)a0 didStartWithMVInfo:(id)a1;
- (void)multiOrderSingMVManagerDidStop:(id)a0;
- (void).cxx_destruct;

@end
