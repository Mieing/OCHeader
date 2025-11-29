@class HTSLiveAvatarCommon, NSString, HTSLiveAvatarChatMessage;

@interface HTSLiveAvatarTextToAudioResponse : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveAvatarCommon *bizCommon;
@property (nonatomic) BOOL hasBizCommon;
@property (nonatomic) int code;
@property (copy, nonatomic) NSString *status;
@property (retain, nonatomic) HTSLiveAvatarChatMessage *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
