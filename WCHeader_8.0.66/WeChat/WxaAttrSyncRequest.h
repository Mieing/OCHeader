@class WxaClientPublicLibInfo, BaseRequest, NSString, NSData, CommRequestSource;

@interface WxaAttrSyncRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *wxaUserName;
@property (retain, nonatomic) NSData *lastAttrVersion;
@property (retain, nonatomic) NSString *wxaAppId;
@property (retain, nonatomic) NSString *instanceId;
@property (nonatomic) int requestScene;
@property (retain, nonatomic) CommRequestSource *requestSource;
@property (retain, nonatomic) WxaClientPublicLibInfo *publicLib;
@property (retain, nonatomic) NSString *deviceModel;
@property (retain, nonatomic) NSString *deviceRelease;

+ (void)initialize;

@end
