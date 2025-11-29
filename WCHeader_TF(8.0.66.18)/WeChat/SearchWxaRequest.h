@class BaseRequest, NSString, WxaLocation;

@interface SearchWxaRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *query;
@property (nonatomic) unsigned long long searchId;
@property (nonatomic) unsigned int begId;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) BOOL isHomePage;
@property (retain, nonatomic) WxaLocation *wxaLocation;
@property (nonatomic) unsigned long long sessionId;

+ (void)initialize;

@end
