@class HTSLiveAvatarCommon, HTSLiveAvatarAudioData;

@interface HTSLiveAvatarAudioToTextRequest : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveAvatarCommon *bizCommon;
@property (nonatomic) BOOL hasBizCommon;
@property (retain, nonatomic) HTSLiveAvatarAudioData *audio;
@property (nonatomic) BOOL hasAudio;

+ (id)descriptor;

@end
