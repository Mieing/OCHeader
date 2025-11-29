@class GetTokenResponse_Data;

@interface GetTokenResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetTokenResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
