@class BaseRequest, NSString;

@interface UpdateMyRankCoverRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *coverurl;
@property (retain, nonatomic) NSString *motto;

+ (void)initialize;

@end
