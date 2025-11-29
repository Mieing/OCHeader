@class UIViewController, AWEAwemeModel;

@interface AWEPlayRemotePlayerReuseModel : NSObject

@property (readonly, nonatomic) AWEAwemeModel *model;
@property (readonly, nonatomic) UIViewController *player;
@property (readonly, nonatomic) BOOL playerUseAudioMix;

- (void)clearPlayer;
- (id)initWithModel:(id)a0 player:(id)a1 useAudioMix:(BOOL)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
