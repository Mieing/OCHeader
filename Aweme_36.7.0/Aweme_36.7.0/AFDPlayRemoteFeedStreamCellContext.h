@class UIViewController;

@interface AFDPlayRemoteFeedStreamCellContext : AFDPlayRemoteFeedContext

@property (readonly, nonatomic) long long playerReuseScene;
@property (readonly, weak, nonatomic) UIViewController *reusedPlayer;

- (BOOL)needReusePlayer;
- (id)initWithPlayerReuseScene:(long long)a0 useAudioMix:(BOOL)a1;
- (void)updateReusedPlayer:(id)a0;
- (void).cxx_destruct;

@end
