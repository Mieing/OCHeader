@class GetCommentControlMessageResponse_ResponseData;

@interface GetCommentControlMessageResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetCommentControlMessageResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
