@class SAMICore_AudioConfig;

@interface SAMICore_VcSpeakerParameter : NSObject

@property (nonatomic) const char *speaker;
@property (retain, nonatomic) SAMICore_AudioConfig *inputAudioConfig;
@property (retain, nonatomic) SAMICore_AudioConfig *outputAudioConfig;
@property (nonatomic) BOOL enableSaveInputAudioData;
@property (nonatomic) BOOL enableSaveOutputAudioData;
@property (nonatomic) BOOL enableBackground;
@property (nonatomic) BOOL enablePlaying;
@property (nonatomic) int playerCacheTime;

@end
