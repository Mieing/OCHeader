@class StreamOpeningChatForIMResponse_Data;

@interface StreamOpeningChatForIMResponse : IESLivePBBaseMessage

@property (retain, nonatomic) StreamOpeningChatForIMResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
