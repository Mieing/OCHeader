@interface IESLiveEnterRoomCreatePlayerManager : NSObject

+ (void)createPlayerIfNeededForEnterRoomAtStage:(id)a0 roomAisle:(id)a1 completion:(id /* block */)a2;
+ (BOOL)enableUnifyCreatePlayer;
+ (void)logAndTrackCreatePlayerDetails:(id)a0;
+ (id)p_createPreferenceInfoWithTriggerReason:(id)a0;
+ (void)requestPreloadAndCreatePlayerIfNeededWithRoomAisle:(id)a0;

@end
