@class GetCommentControlStatusResponse_ResponseData;

@interface GetCommentControlStatusResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetCommentControlStatusResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
