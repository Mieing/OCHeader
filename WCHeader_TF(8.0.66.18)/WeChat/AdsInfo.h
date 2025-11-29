@class NSString, NSData;

@interface AdsInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *uxinfo;
@property (retain, nonatomic) NSData *traceid;
@property (retain, nonatomic) NSData *rl;
@property (retain, nonatomic) NSData *apurl;
@property (retain, nonatomic) NSData *groupId;
@property (retain, nonatomic) NSString *adPosid;
@property (retain, nonatomic) NSData *aid;
@property (retain, nonatomic) NSData *tid;
@property (retain, nonatomic) NSData *hintTxt;
@property (retain, nonatomic) NSData *imageUrl;
@property (retain, nonatomic) NSString *imageUrlDark;
@property (nonatomic) unsigned int landingPageType;
@property (retain, nonatomic) NSData *urlScheme;
@property (nonatomic) unsigned long long appId;
@property (retain, nonatomic) NSData *apkName;
@property (nonatomic) unsigned long long urlSchemeMinAndroidVersion;
@property (retain, nonatomic) NSString *iosInstallCheckScheme;
@property (retain, nonatomic) NSData *appinfoUrl;
@property (retain, nonatomic) NSData *canvasId;
@property (retain, nonatomic) NSData *canvasDynamicInfo;
@property (retain, nonatomic) NSData *adInfoXml;
@property (nonatomic) unsigned int isAdShow;
@property (retain, nonatomic) NSString *reportExtraData;
@property (retain, nonatomic) NSData *adDesc;
@property (retain, nonatomic) NSString *hintTxtEn;
@property (retain, nonatomic) NSString *adDescEn;

+ (void)initialize;

@end
