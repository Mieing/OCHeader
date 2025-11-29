@class UpdateCommentControlStatusResponse_ResponseData;

@interface UpdateCommentControlStatusResponse : IESLivePBBaseMessage

@property (retain, nonatomic) UpdateCommentControlStatusResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
