@class NSArray, NSString, AVQueuePlayer;
@protocol BDUGLuckyDogAudioPlaybackSessionDelegate;

@interface BDUGLuckyDogAudioPlaybackSession : NSObject

@property (readonly, nonatomic) AVQueuePlayer *player;
@property (readonly, nonatomic) NSArray *playerItems;
@property (nonatomic) long long status;
@property (nonatomic) float rateTarget;
@property (readonly, copy, nonatomic) NSString *urlString;
@property (readonly, nonatomic) BOOL needLoop;
@property (weak, nonatomic) id<BDUGLuckyDogAudioPlaybackSessionDelegate> delegate;

- (id)initWithURLString:(id)a0 loopEnabled:(BOOL)a1;
- (id)playerItemsWithURL:(id)a0 loopEnabled:(BOOL)a1;
- (void)audioSessionDidInterrupted:(id)a0;
- (void).cxx_destruct;
- (void)pause;
- (id)init;
- (void)resume;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;

@end
