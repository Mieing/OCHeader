@interface GameRoomResponse_Data : IESLivePBBaseMessage

@property (nonatomic) BOOL isGameRoom;
@property (nonatomic) BOOL hasProcessingQuiz;

+ (id)descriptor;

@end
