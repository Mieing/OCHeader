@class NSMutableDictionary;
@protocol IESECPDPStateControlledVideoPlayerProtocol;

@interface IESECPDPVideoPlayStateManagerState : NSObject <NSCopying>

@property (weak, nonatomic) id<IESECPDPStateControlledVideoPlayerProtocol> audioPlayer;
@property (retain, nonatomic) NSMutableDictionary *videoPlayersMap;

- (id)validAudioSourceArrayWithPlayer:(id)a0;
- (id)playingVideoPlayersArray;
- (BOOL)isAudioOnlyStrategy:(id)a0;
- (id)playingPlayersArray;
- (void)player:(id)a0 didChangeMuteStatusTo:(BOOL)a1 audioPlayerDetermineBlock:(id /* block */)a2 audioPlayerChangeBlock:(id /* block */)a3;
- (void)player:(id)a0 didChangeStatusTo:(BOOL)a1 audioPlayerDetermineBlock:(id /* block */)a2 audioPlayerChangeBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
