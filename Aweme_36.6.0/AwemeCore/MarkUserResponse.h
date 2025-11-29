@class MarkUserResponse_ResponseData;

@interface MarkUserResponse : IESLivePBBaseMessage

@property (retain, nonatomic) MarkUserResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
