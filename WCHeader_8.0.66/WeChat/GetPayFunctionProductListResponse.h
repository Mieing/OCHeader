@class NSString, BaseResponse;

@interface GetPayFunctionProductListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *productList;
@property (retain, nonatomic) NSString *outerLinkList;

+ (void)initialize;

@end
