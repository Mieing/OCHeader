@class UserLinkResponse_ResponseData;

@interface UserLinkResponse : IESLivePBBaseMessage

@property (retain, nonatomic) UserLinkResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
