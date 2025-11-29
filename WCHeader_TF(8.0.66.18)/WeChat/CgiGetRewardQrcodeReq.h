@class BaseRequest, NSString;

@interface CgiGetRewardQrcodeReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) BOOL hasCache;
@property (retain, nonatomic) NSString *photoUrl;
@property (retain, nonatomic) NSString *photoAeskey;

+ (void)initialize;

@end
