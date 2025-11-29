@class HTSLiveAvatarCommon, NSString;

@interface HTSLiveAvatarChatResponse : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveAvatarCommon *bizCommon;
@property (nonatomic) BOOL hasBizCommon;
@property (copy, nonatomic) NSString *msgId;
@property (nonatomic) int code;
@property (copy, nonatomic) NSString *status;

+ (id)descriptor;

@end
