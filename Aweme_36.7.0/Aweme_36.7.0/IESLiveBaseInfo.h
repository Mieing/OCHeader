@class HTSLiveOpenHostInfo, NSString, IESLiveSaasBaseInfo, HTSLiveImage, PoiInfo, HTSLiveUser_XiguaParams, HTSLiveUser_UserAttr;

@interface IESLiveBaseInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *id_p;
@property (copy, nonatomic) NSString *idStr;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *displayId;
@property (copy, nonatomic) NSString *nickname;
@property (nonatomic) int gender;
@property (copy, nonatomic) NSString *signature;
@property (retain, nonatomic) HTSLiveImage *avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (retain, nonatomic) HTSLiveImage *avatarMedium;
@property (nonatomic) BOOL hasAvatarMedium;
@property (retain, nonatomic) HTSLiveImage *avatarLarge;
@property (nonatomic) BOOL hasAvatarLarge;
@property (copy, nonatomic) NSString *city;
@property (retain, nonatomic) PoiInfo *poiInfo;
@property (nonatomic) BOOL hasPoiInfo;
@property (nonatomic) int secret;
@property (copy, nonatomic) NSString *remarkName;
@property (nonatomic) int age;
@property (copy, nonatomic) NSString *school;
@property (copy, nonatomic) NSString *locationCity;
@property (nonatomic) int mysteryMan;
@property (nonatomic) int accountType;
@property (retain, nonatomic) IESLiveSaasBaseInfo *saasBaseInfo;
@property (nonatomic) BOOL hasSaasBaseInfo;
@property (retain, nonatomic) HTSLiveUser_XiguaParams *xiguaInfo;
@property (nonatomic) BOOL hasXiguaInfo;
@property (retain, nonatomic) HTSLiveUser_UserAttr *userAttr;
@property (nonatomic) BOOL hasUserAttr;
@property (retain, nonatomic) HTSLiveOpenHostInfo *hostInfo;
@property (nonatomic) BOOL hasHostInfo;

+ (id)descriptor;

@end
