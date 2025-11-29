@class SubscribeKeywordCommentResponse_Data;

@interface SubscribeKeywordCommentResponse : IESLivePBBaseMessage

@property (retain, nonatomic) SubscribeKeywordCommentResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
