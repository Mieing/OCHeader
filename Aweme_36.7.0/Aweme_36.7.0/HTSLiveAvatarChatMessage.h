@class NSString, HTSLiveAvatarAudioContent, HTSLivePackageMeta;

@interface HTSLiveAvatarChatMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLivePackageMeta *meta;
@property (nonatomic) BOOL hasMeta;
@property (copy, nonatomic) NSString *role;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long time;
@property (retain, nonatomic) HTSLiveAvatarAudioContent *audio;
@property (nonatomic) BOOL hasAudio;
@property (nonatomic) int wordInterval;

+ (id)descriptor;

@end
