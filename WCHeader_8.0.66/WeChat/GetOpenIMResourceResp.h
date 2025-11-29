@class AppIdResource, AcctTypeResource, NSMutableArray, BaseResponse;

@interface GetOpenIMResourceResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) AppIdResource *appidResource;
@property (retain, nonatomic) AcctTypeResource *acctTypeResource;
@property (retain, nonatomic) NSMutableArray *wordingIdResource;

+ (void)initialize;

@end
