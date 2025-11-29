@class NSString, OauthWordingInfo, NSMutableArray, BaseResponse;

@interface OauthAuthorizeResp : WXPBGeneratedMessage

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
@property (nonatomic) BOOL isTouristAuth;
@property (retain, nonatomic) OauthWordingInfo *wordingInfo;

+ (void)initialize;

@end
