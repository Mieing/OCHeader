@class NSString, OauthWordingInfo, NSData, NSMutableArray, BaseResponse;

@interface QRConnectAuthorizeResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) BOOL isReturnH5;
@property (retain, nonatomic) NSMutableArray *scopeList;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *appname;
@property (retain, nonatomic) NSString *appiconUrl;
@property (retain, nonatomic) NSMutableArray *avatarList;
@property (nonatomic) BOOL isBanModifyAvatar;
@property (nonatomic) unsigned int avatarLimit;
@property (nonatomic) unsigned int defaultAvatarId;
@property (retain, nonatomic) NSString *defaultHeadimgUrl;
@property (retain, nonatomic) NSString *defaultHeadimgFileid;
@property (retain, nonatomic) OauthWordingInfo *wordingInfo;
@property (retain, nonatomic) NSData *faceVerifyReqBuffer;
@property (nonatomic) BOOL isNeedExceptionConfirm;
@property (retain, nonatomic) NSData *gamecenterBuffer;
@property (nonatomic) BOOL isHaveGamecenterPage;

+ (void)initialize;

@end
