@class AVPlayerItem;
@protocol BDByteCastAVPlayerDelegate;

@interface BDByteCastAVPlayer : AVPlayer

@property (weak, nonatomic) AVPlayerItem *tempItem;
@property (weak, nonatomic) id timeObserver;
@property (nonatomic) double statusQueryInterval;
@property (weak, nonatomic) id<BDByteCastAVPlayerDelegate> bdDelegate;

- (void)videoPlayEnd:(id)a0;
- (void)updateCurrentItem:(id)a0;
- (void)playWithTimeoutCheck;
- (void)addObserverWithCurPlayer;
- (void)removeObserverWithCurPlayer;
- (void)removeItemObservers:(id)a0;
- (void)addItemObservers:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
