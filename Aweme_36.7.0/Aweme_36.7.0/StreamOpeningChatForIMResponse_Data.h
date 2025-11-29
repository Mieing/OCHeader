@class NSString;

@interface StreamOpeningChatForIMResponse_Data : IESLivePBBaseMessage

@property (nonatomic) BOOL success;
@property (copy, nonatomic) NSString *streamId;
@property (copy, nonatomic) NSString *reqId;

+ (id)descriptor;

@end
