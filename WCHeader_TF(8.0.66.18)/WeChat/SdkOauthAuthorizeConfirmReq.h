@class BaseRequest, NSString, NSData, NSMutableArray;

@interface SdkOauthAuthorizeConfirmReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int opt;
@property (retain, nonatomic) NSMutableArray *scope;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *state;
@property (retain, nonatomic) NSString *bundleid;
@property (nonatomic) unsigned int avatarId;
@property (retain, nonatomic) NSString *universalLink;
@property (retain, nonatomic) NSString *opensdkVersion;
@property (retain, nonatomic) NSString *sdkToken;
@property (retain, nonatomic) NSString *opensdkBundleid;
@property (nonatomic) unsigned int sdkTokenChk;
@property (retain, nonatomic) NSString *sdkExtdata;
@property (retain, nonatomic) NSData *ilinkSpamBuffer;
@property (retain, nonatomic) NSData *oauthContextBuffer;
@property (retain, nonatomic) NSData *gamecenterBuffer;
@property (nonatomic) BOOL isHaveGamecenterPage;
@property (nonatomic) BOOL isoption1;

+ (void)initialize;

@end
