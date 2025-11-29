@class NSString, NSMutableDictionary;
@protocol IESVideoPlayerProtocol;

@interface AWEAdLynxCardVoicePlayerHelper : NSObject

@property (retain, nonatomic) id<IESVideoPlayerProtocol> player;
@property (retain, nonatomic) NSMutableDictionary *playerDict;
@property (nonatomic) BOOL hasHalfVolume;
@property (nonatomic) BOOL disableVoicePlayer;
@property (retain, nonatomic) NSString *endVoiceURL;

- (void)preloadWithURLs:(id)a0;
- (void)resetVoicePlayer;
- (void)showVoicePlayer;
- (void)hideVoicePlayer;
- (BOOL)playURL:(id)a0 needVolumeDown:(BOOL)a1;
- (void)setVolumeWithFactor:(double)a0;
- (void)handleVoicePlayToEnd:(id)a0;
- (void).cxx_destruct;
- (id)initWithPlayerController:(id)a0;

@end
