@class NSString, NSMutableArray;

@interface FinderEncashPrepareInfo_RealNameAuthInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSMutableArray *categoryId;
@property (nonatomic) int authType;
@property (retain, nonatomic) NSString *applyInfo;
@property (retain, nonatomic) NSString *protocolUrl;
@property (nonatomic) BOOL hasRealnameAuth;
@property (nonatomic) unsigned int realnameAuthType;
@property (retain, nonatomic) NSString *realnameAuthUrl;

+ (void)initialize;

@end
