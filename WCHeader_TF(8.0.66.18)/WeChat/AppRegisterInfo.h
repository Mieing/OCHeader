@class NSString, NSMutableDictionary;

@interface AppRegisterInfo : NSObject <NSCoding>

@property (nonatomic) unsigned long long appInfoVer;
@property (nonatomic) BOOL needUpdateInfo;
@property (nonatomic) BOOL needUpdateIcon;
@property (nonatomic) BOOL needUpdateWatermark;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *appName4ZhTw;
@property (retain, nonatomic) NSString *appName4EnUs;
@property (retain, nonatomic) NSString *appID;
@property (retain, nonatomic) NSString *appIdentifier;
@property (retain, nonatomic) NSString *appDescription;
@property (retain, nonatomic) NSString *appDescription4ZhTw;
@property (retain, nonatomic) NSString *appDescription4EnUs;
@property (retain, nonatomic) NSString *appInstallUrl;
@property (nonatomic) BOOL appAddedByUser;
@property (retain, nonatomic) NSString *appIconUrl;
@property (retain, nonatomic) NSString *appWatermarkUrl;
@property (nonatomic) unsigned int lastUpdateInfoTime;
@property (nonatomic) unsigned int lastUpdateWatermarkTime;
@property (nonatomic) unsigned int lastUpdateIconTime;
@property (retain, nonatomic) NSString *appTypeList;
@property (retain, nonatomic) NSString *appDevInfo;
@property (nonatomic) unsigned int appInfoFlag;
@property (nonatomic) unsigned int appUpdateVersion;
@property (nonatomic) BOOL appCanShowNew;
@property (nonatomic) BOOL isNewApp;
@property (retain, nonatomic) NSString *appDownloadUrl;
@property (retain, nonatomic) NSString *appDownloadUrlMD5;
@property (nonatomic) unsigned int nextUpdateInfoTime;
@property (nonatomic) unsigned int rankWeight;
@property (retain, nonatomic) NSMutableDictionary *dicShowInShareListSeq;
@property (nonatomic) unsigned int uiShowInShareList;
@property (nonatomic) unsigned long long appSupportContentType;
@property (nonatomic) unsigned long long appSupportContentTypeBy3rdApp;
@property (nonatomic) BOOL isAppIconUrlChanged;
@property (nonatomic) BOOL isAppWatermarkUrlChanged;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
