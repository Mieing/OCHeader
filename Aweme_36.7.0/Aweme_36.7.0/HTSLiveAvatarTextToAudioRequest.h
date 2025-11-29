@class HTSLiveAvatarCommon, NSString;

@interface HTSLiveAvatarTextToAudioRequest : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveAvatarCommon *bizCommon;
@property (nonatomic) BOOL hasBizCommon;
@property (copy, nonatomic) NSString *text;

+ (id)descriptor;

@end
