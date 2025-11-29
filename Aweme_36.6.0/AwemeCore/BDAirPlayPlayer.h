@class BDByteCastAVPlayer, NSMutableDictionary, BDAirPlayConnection, NSString, NSMutableArray, NSObject;
@protocol BDAirPlayPlayerDelegate;

@interface BDAirPlayPlayer : NSObject <BDByteCastAVPlayerDelegate>

@property (retain, nonatomic) BDByteCastAVPlayer *player;
@property (nonatomic) unsigned long long playerStatus;
@property (nonatomic) long long repeatMode;
@property (nonatomic) BOOL hasNotifiedDelegate;
@property (nonatomic) BOOL isValidAirPlayRoute;
@property (retain, nonatomic) NSMutableDictionary *dramaUrlMap;
@property (retain, nonatomic) NSMutableArray *dramaOrder;
@property (weak, nonatomic) NSObject<BDAirPlayPlayerDelegate> *delegate;
@property (retain, nonatomic) BDAirPlayConnection *connection;
@property (nonatomic) double statusQueryInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resumePlay;
- (void)playWithItem:(id)a0;
- (void)resetPlay;
- (void)playWithItem:(id)a0 completionBlock:(id /* block */)a1;
- (void)addVolume;
- (void)reduceVolume;
- (BOOL)canPlayMedia:(unsigned long long)a0;
- (void)getSinkDeviceInfoWithMessageType:(long long)a0 completion:(id /* block */)a1;
- (unsigned char)isValidAppleAirPlayFormat;
- (void)p_addDramaWithID:(id)a0 url:(id)a1 beforeDramaId:(id)a2;
- (void)p_seekTo:(long long)a0;
- (void)p_clearDramaList;
- (void)p_playDramaWithDramaId:(id)a0;
- (void)p_playNextDrama;
- (void)p_playPreDrama;
- (void)p_deleteDramaList:(id)a0;
- (void)notifyDelegateWithCurrentItem;
- (void)processLoopMode;
- (void)p_playWithDramaId:(id)a0;
- (id)convertDramaOrderToDramaItems:(id)a0;
- (void)playNextDrama;
- (void)byteCastAVPlayer:(id)a0 didFinishPlayingItem:(id)a1;
- (void)byteCastAVPlayer:(id)a0 didFailToPlayItem:(id)a1 error:(id)a2;
- (void)byteCastAVPlayer:(id)a0 didPauseItem:(id)a1;
- (void)byteCastAVPlayer:(id)a0 didStartPlayingItem:(id)a1;
- (void)byteCastAVPlayer:(id)a0 didBufferingReadyForItem:(id)a1;
- (void)byteCastAVPlayer:(id)a0 item:(id)a1 progressInfo:(double)a2 currentTime:(double)a3;
- (void)playDramaWithDramaId:(id)a0;
- (void)playPreDrama;
- (void)clearDramaList;
- (void)deleteDramaList:(id)a0;
- (void)addDramaList:(id)a0 beforeDramaId:(id)a1 completionBlock:(id /* block */)a2;
- (void)setRepeatMode:(long long)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)pause;
- (id)initWithConnection:(id)a0;
- (void)stop;
- (void)setVolume:(long long)a0;
- (void)dealloc;
- (void)seekTo:(long long)a0;

@end
