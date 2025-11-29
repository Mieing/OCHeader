@class AWEHumanEnhancedAudioModel, NSArray, NSString;

@interface AWEAudioModel : AWEBaseApiModel

@property (retain, nonatomic) AWEHumanEnhancedAudioModel *humanEnhancedAudio;
@property (readonly, nonatomic) BOOL defaultEnableOriginSound;
@property (readonly, copy, nonatomic) NSArray *originalSoundInfos;
@property (retain, nonatomic) NSString *audioWave;

+ (id)humanEnhancedAudioJSONTransformer;
+ (id)originalSoundInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
