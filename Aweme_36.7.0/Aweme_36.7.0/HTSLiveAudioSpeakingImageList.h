@class HTSLiveAudioSpeakingImageList_SpeakingImage;

@interface HTSLiveAudioSpeakingImageList : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveAudioSpeakingImageList_SpeakingImage *maleSpeakingImage;
@property (nonatomic) BOOL hasMaleSpeakingImage;
@property (retain, nonatomic) HTSLiveAudioSpeakingImageList_SpeakingImage *femaleSpeakingImage;
@property (nonatomic) BOOL hasFemaleSpeakingImage;
@property (retain, nonatomic) HTSLiveAudioSpeakingImageList_SpeakingImage *unknownSpeakingImage;
@property (nonatomic) BOOL hasUnknownSpeakingImage;
@property (retain, nonatomic) HTSLiveAudioSpeakingImageList_SpeakingImage *audioStageSpeakingImage;
@property (nonatomic) BOOL hasAudioStageSpeakingImage;

+ (id)descriptor;

@end
