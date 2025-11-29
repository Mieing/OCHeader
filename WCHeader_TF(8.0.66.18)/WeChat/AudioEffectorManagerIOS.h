@class WXAudioEffectManager;

@interface AudioEffectorManagerIOS : NSObject

@property (retain, nonatomic) WXAudioEffectManager *audioEffectManager;

+ (id)sharedInstance;

- (id)init;
- (id)getAudioEffectManager;
- (void).cxx_destruct;

@end
