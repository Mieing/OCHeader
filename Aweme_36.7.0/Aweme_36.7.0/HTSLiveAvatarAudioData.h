@class NSData, HTSLiveAvatarAudioMeta, HTSLivePackageMeta;

@interface HTSLiveAvatarAudioData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLivePackageMeta *meta;
@property (nonatomic) BOOL hasMeta;
@property (retain, nonatomic) HTSLiveAvatarAudioMeta *audio;
@property (nonatomic) BOOL hasAudio;
@property (copy, nonatomic) NSData *data_p;

+ (id)descriptor;

@end
