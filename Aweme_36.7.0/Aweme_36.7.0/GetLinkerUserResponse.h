@class GetLinkerUserResponse_ResponseData;

@interface GetLinkerUserResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetLinkerUserResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
