@class NSString;

@interface AppRegisterInfo : NSObject <NSCoding>

@property (nonatomic) unsigned long long appInfoVer;
@property (nonatomic) BOOL needUpdateInfo;
@property (nonatomic) BOOL needUpdateIcon;
@property (nonatomic) BOOL needUpdateWatermark;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appName4ZhTw;
@property (copy, nonatomic) NSString *appName4EnUs;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *appIdentifier;
@property (copy, nonatomic) NSString *appDescription;
@property (copy, nonatomic) NSString *appDescription4ZhTw;
@property (copy, nonatomic) NSString *appDescription4EnUs;
@property (copy, nonatomic) NSString *appInstallUrl;
@property (nonatomic) BOOL appAddedByUser;
@property (copy, nonatomic) NSString *appIconUrl;
@property (copy, nonatomic) NSString *appWatermarkUrl;
@property (nonatomic) unsigned int lastUpdateInfoTime;
@property (nonatomic) unsigned int lastUpdateWatermarkTime;
@property (nonatomic) unsigned int lastUpdateIconTime;
@property (copy, nonatomic) NSString *appTypeList;
@property (copy, nonatomic) NSString *appDevInfo;
@property (nonatomic) unsigned int appInfoFlag;
@property (nonatomic) unsigned int appUpdateVersion;
@property (nonatomic) BOOL appCanShowNew;
@property (nonatomic) BOOL isNewApp;
@property (copy, nonatomic) NSString *appDownloadUrl;
@property (copy, nonatomic) NSString *appDownloadUrlMD5;
@property (nonatomic) unsigned int nextUpdateInfoTime;
@property (nonatomic) unsigned int rankWeight;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
