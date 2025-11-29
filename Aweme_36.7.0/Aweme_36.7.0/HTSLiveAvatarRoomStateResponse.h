@class HTSLiveAvatarCommon, NSString;

@interface HTSLiveAvatarRoomStateResponse : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveAvatarCommon *bizCommon;
@property (nonatomic) BOOL hasBizCommon;
@property (nonatomic) int talkState;
@property (nonatomic) int userInteractiveMode;
@property (nonatomic) int avatarInteractiveMode;
@property (nonatomic) int code;
@property (copy, nonatomic) NSString *status;

+ (id)descriptor;

@end
