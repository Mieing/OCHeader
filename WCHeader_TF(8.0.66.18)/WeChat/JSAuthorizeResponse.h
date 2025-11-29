@class JSAPIBaseResponse, NSString, UserPrivacyProtectInfo, AlertPrivacyInfo, NSMutableArray, BaseResponse;

@interface JSAuthorizeResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) JSAPIBaseResponse *jsapiBaseresponse;
@property (retain, nonatomic) NSMutableArray *scopeList;
@property (retain, nonatomic) NSString *appname;
@property (retain, nonatomic) NSString *appiconUrl;
@property (retain, nonatomic) NSString *cancelWording;
@property (retain, nonatomic) NSString *allowWording;
@property (retain, nonatomic) NSString *applyWording;
@property (retain, nonatomic) AlertPrivacyInfo *privacyInfo;
@property (retain, nonatomic) NSMutableArray *riskInfo;
@property (retain, nonatomic) NSString *jsapiScope;
@property (retain, nonatomic) UserPrivacyProtectInfo *privacyProtectInfo;

+ (void)initialize;

@end
