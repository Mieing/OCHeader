@class NSString;
@protocol IESVideoPlayerProtocol, IESIMVideoPlayerWrapperDelegate;

@interface IESIMVideoPlayerWrapper : NSObject <IESIMVideoPlayerWrapperProtocol, IESVideoPlayerDelegate>

@property (retain, nonatomic) id<IESVideoPlayerProtocol> player;
@property (nonatomic) BOOL repeated;
@property (weak, nonatomic) id<IESIMVideoPlayerWrapperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)removeTimeObserver;
- (void)resetDecryptionKey:(id)a0;
- (void)resetVideoID:(id)a0 andPlayURLs:(id)a1;
- (void)setupHDREnable:(BOOL)a0;
- (void)removePlayerDelegate;
- (id)initWithIESVideoPlayer:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (id)view;
- (void)prepareToPlay;
- (long long)actionState;

@end
