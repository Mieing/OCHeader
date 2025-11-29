@class NSString;
@protocol IESVideoPlayerProtocol;

@interface AWECurrentVideoPlayerFinder : NSObject <AWEPlayVideoMessage>

@property (weak, nonatomic) id<IESVideoPlayerProtocol> lastPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isOnScreenPlayer:(id)a0;
+ (id)sharedInstance;

- (void)playerDidReadyForDisplay:(id)a0;
- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)player:(id)a0 beInsertedSuccessWithPlaybackAction:(long long)a1;
- (void)trackPlayerIfNeeded:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
