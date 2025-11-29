@class NSString, AVPlayer, AVPlayerItem;

@interface AWECommerceAudioPlayer : NSObject <AWECommerceAudioPlayer>

@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) AVPlayerItem *currentPlayerItem;
@property (copy, nonatomic) NSString *currentURLString;
@property (copy, nonatomic) id /* block */ readyToPlayBlock;
@property (copy, nonatomic) id /* block */ finishBlock;
@property (copy, nonatomic) id /* block */ failedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlayer;

- (void)playWith:(id)a0;
- (void)clearPlayer;
- (void)removePlayerItemObserver;
- (void)addPlayerItemObserver;
- (void)avPlayerDidFinish:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)seekToTime:(double)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
