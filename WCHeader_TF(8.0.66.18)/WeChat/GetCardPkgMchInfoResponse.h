@class NSString, CardHomePageElement, BaseResponse;

@interface GetCardPkgMchInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) CardHomePageElement *cardPkgMchInfo;
@property (nonatomic) unsigned int isRefreshHomepage;

+ (void)initialize;

@end
