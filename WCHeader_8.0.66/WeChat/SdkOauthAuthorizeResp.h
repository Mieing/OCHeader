@class NSString, OauthWordingInfo, NSData, NSMutableArray, BaseResponse;

@interface SdkOauthAuthorizeResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *scopeList;
@property (retain, nonatomic) NSString *appname;
@property (retain, nonatomic) NSString *appiconUrl;
@property (retain, nonatomic) NSString *redirectUrl;
@property (nonatomic) BOOL isRecentHasAuth;
@property (nonatomic) BOOL isSlienctAuth;
@property (nonatomic) BOOL isCallServerWhenConfirm;
@property (retain, nonatomic) NSMutableArray *avatarList;
@property (nonatomic) BOOL isUseNewpage;
@property (nonatomic) BOOL isBanModifyAvatar;
@property (nonatomic) unsigned int avatarLimit;
@property (nonatomic) unsigned int defaultAvatarId;
@property (retain, nonatomic) NSString *defaultHeadimgUrl;
@property (retain, nonatomic) NSString *defaultHeadimgFileid;
@property (retain, nonatomic) NSString *wxToken;
@property (retain, nonatomic) NSString *userConfirmRedirectUrl;
@property (retain, nonatomic) NSString *userConfirmWording;
@property (retain, nonatomic) NSString *cloudGameScopeWording;
@property (retain, nonatomic) NSData *ilinkAuthBuffer;
@property (retain, nonatomic) NSData *oauthContextBuffer;
@property (retain, nonatomic) OauthWordingInfo *wordingInfo;
@property (retain, nonatomic) NSData *gamecenterBuffer;
@property (nonatomic) BOOL isHaveGamecenterPage;
@property (retain, nonatomic) NSData *faceVerifyReqBuffer;

+ (void)initialize;

@end
