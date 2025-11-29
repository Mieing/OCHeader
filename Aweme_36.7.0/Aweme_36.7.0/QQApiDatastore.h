@class NSString;

@interface QQApiDatastore : NSObject

@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSString *openId;
@property (copy, nonatomic) NSString *uin;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *webviewToken;
@property (nonatomic) BOOL sdkCfgCanUlink;
@property (nonatomic) BOOL isUserAgreedAuthorization;

+ (id)instance;

- (BOOL)isQQSupportUrlInsteadPastedboard;
- (int)setApiLargeData:(id)a0;
- (int)setApiMessage:(id)a0;
- (void)clearApiMessage;
- (id)getApiLargeDataByGeneralPastboard;
- (void)clearApiLargeData;
- (id)getApiMessageWithClass:(Class)a0;
- (BOOL)isQQSupportUrlForShareText;
- (id)getApiLargeData;
- (BOOL)isQQSupportApiGeneralPastboard;
- (void).cxx_destruct;
- (void)dealloc;

@end
