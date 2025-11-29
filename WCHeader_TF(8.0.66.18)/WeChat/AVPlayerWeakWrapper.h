@class AVPlayer;

@interface AVPlayerWeakWrapper : NSObject

@property (weak, nonatomic) AVPlayer *player;

+ (id)wrapperWithPlayer:(id)a0;

- (void).cxx_destruct;

@end
