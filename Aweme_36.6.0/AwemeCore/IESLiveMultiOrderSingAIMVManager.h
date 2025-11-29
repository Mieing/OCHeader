@class HTSEventContext, IESLiveMultiOrderSingApi, NSString, IESLiveRoomSongInfo;
@protocol IESLiveRoomService, IESLiveMultiOrderSingMVManagerDelegate;

@interface IESLiveMultiOrderSingAIMVManager : NSObject <IESLiveMultiOrderSingMVManagerProtocol, IESLiveAIMVRouter>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLiveMultiOrderSingApi *api;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveRoomSongInfo *currentRoomSongInfo;
@property (copy, nonatomic) NSString *defaultMVID;
@property (weak, nonatomic) id<IESLiveMultiOrderSingMVManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithRoom:(id)a0 trackContext:(id)a1;
- (void)handleMVWRDSReceived:(id)a0;
- (void)restartMVBackgroundIfNeed;
- (id)getLatestRoomSongInfo;
- (void)handlePlayModeInfo:(id)a0;
- (void)handleOrderSingMessage:(id)a0;
- (void)startMVBackgroundWithMVInfo:(id)a0;
- (void)stopMVBackgroundWithMVInfo:(id)a0;
- (void)trackMVPlayDurationWithMVInfo:(id)a0 duration:(long long)a1;
- (void)trackMVPlayWithMVInfo:(id)a0;
- (void).cxx_destruct;

@end
