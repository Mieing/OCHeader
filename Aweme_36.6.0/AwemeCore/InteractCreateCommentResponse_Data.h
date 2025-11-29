@class NSString;

@interface InteractCreateCommentResponse_Data : IESLivePBBaseMessage

@property (nonatomic) BOOL success;
@property (copy, nonatomic) NSString *commentId;

+ (id)descriptor;

@end
