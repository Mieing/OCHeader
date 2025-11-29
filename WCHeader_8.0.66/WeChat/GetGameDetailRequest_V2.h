@class BaseRequest, NSString;

@interface GetGameDetailRequest_V2 : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *lang;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) BOOL isInstalled;
@property (retain, nonatomic) NSString *country;
@property (nonatomic) BOOL isNeedConfirmActive;
@property (nonatomic) BOOL needNewRank;

+ (void)initialize;

@end
