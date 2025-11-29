@class AVAudioPlayer;

@interface AVAudioPlayerWeakWrapper : NSObject

@property (weak, nonatomic) AVAudioPlayer *player;

+ (id)wrapperWithPlayer:(id)a0;

- (void).cxx_destruct;

@end
