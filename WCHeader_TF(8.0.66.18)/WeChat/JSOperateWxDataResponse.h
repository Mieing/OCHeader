@class NSData, ScopeInfo, NSString, JSOperateWxDataResponse_DebugInfo, BaseResponse, AlertPrivacyInfo, JSAPIBaseResponse, UserAvatarInfo, UserPrivacyProtectInfo;

@interface JSOperateWxDataResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) JSAPIBaseResponse *jsapiBaseresponse;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) ScopeInfo *scope;
@property (retain, nonatomic) NSString *appname;
@property (retain, nonatomic) NSString *appiconUrl;
@property (retain, nonatomic) JSOperateWxDataResponse_DebugInfo *debugInfo;
@property (nonatomic) BOOL needHoldLongconn;
@property (retain, nonatomic) NSString *cancelWording;
@property (retain, nonatomic) NSString *allowWording;
@property (retain, nonatomic) NSString *applyWording;
@property (retain, nonatomic) UserAvatarInfo *avatarInfo;
@property (retain, nonatomic) AlertPrivacyInfo *privacyInfo;
@property (retain, nonatomic) UserPrivacyProtectInfo *privacyProtectInfo;

+ (void)initialize;

@end
