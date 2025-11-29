@class NSString, IESLiveGCDTimer, HTSLiveStreamPlayer, HTSLiveRoom;

@interface IESLiveEnterAudienceRoomStreamPreloader : NSObject <HTSLiveStreamPlayerDelegate>

@property (retain, nonatomic) HTSLiveRoom *room;
@property (retain, nonatomic) HTSLiveStreamPlayer *player;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (id)streamPlayerGetCurrentRoomModel;
- (void)cancelPreloadStream;
- (void)preloadStreamWithRoom:(id)a0;
- (id)currentPreloadRoomID;
- (void)startReusePlayer:(id)a0;
- (BOOL)canPreloadStream:(id)a0;
- (void)doCancelPreloadStream;
- (void)finishReusePlayer:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end
