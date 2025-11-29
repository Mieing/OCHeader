@class HTSLiveAvatarCommon, HTSLiveAvatarTextData;

@interface HTSLiveAvatarChatRequest : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveAvatarCommon *bizCommon;
@property (nonatomic) BOOL hasBizCommon;
@property (retain, nonatomic) HTSLiveAvatarTextData *text;
@property (nonatomic) BOOL hasText;

+ (id)descriptor;

@end
