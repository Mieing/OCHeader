@interface GetRoomStateResponse_Data : IESLivePBBaseMessage

@property (nonatomic) int talkState;
@property (nonatomic) int userInteractiveMode;
@property (nonatomic) int avatarInteractiveMode;

+ (id)descriptor;

@end
