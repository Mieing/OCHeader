@interface HTSLiveLinkerInitChatRoomContent : IESLivePBBaseMessage

@property (nonatomic) long long roomId;
@property (nonatomic) int scene;
@property (nonatomic) int initSource;
@property (nonatomic) int uiLayout;

+ (id)descriptor;

@end
