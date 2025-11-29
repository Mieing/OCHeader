@class HTSLiveAvatarCommon;

@interface HTSLiveAvatarRoomStateRequest : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveAvatarCommon *bizCommon;
@property (nonatomic) BOOL hasBizCommon;

+ (id)descriptor;

@end
