@class IESECContextProxy, NSString;

@interface IESECLiveRoomPlayerRepeater : NSObject <IESECLiveRoomPlayerInterface>

@property (retain, nonatomic) IESECContextProxy *liveContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPause;
- (void)pauseWithCallTrace:(id)a0;
- (void)playWithCallTrace:(id)a0;
- (id)initWithContextProxy:(id)a0;
- (void).cxx_destruct;
- (BOOL)isPlaying;
- (void)setMute:(BOOL)a0;
- (BOOL)isMute;

@end
