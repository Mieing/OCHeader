@class NSString, EnhancedAudioStructV2, NSMutableArray;

@interface AudioStructV2 : GPBMessage

@property (retain, nonatomic) EnhancedAudioStructV2 *enhanceAudioInfos;
@property (nonatomic) BOOL hasEnhanceAudioInfos;
@property (retain, nonatomic) NSMutableArray *originalSoundInfosArray;
@property (readonly, nonatomic) unsigned long long originalSoundInfosArray_Count;
@property (nonatomic) BOOL defaultEnableOriginSound;
@property (nonatomic) BOOL hasDefaultEnableOriginSound;
@property (copy, nonatomic) NSString *audioWave;
@property (nonatomic) BOOL hasAudioWave;

+ (id)descriptor;

@end
