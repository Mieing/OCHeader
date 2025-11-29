@class IESGCPPBIOSPackageInfo, NSString, IESGCPPBAndroidDownloadInfo, IESGCPPBAndroidPackageInfo, IESGCPPBAppStoreInfo;

@interface IESGCPPBGamePlatformInfo : GPBMessage

@property (nonatomic) int platform;
@property (copy, nonatomic) NSString *packagePermissionURL;
@property (copy, nonatomic) NSString *privacyPolityURL;
@property (retain, nonatomic) IESGCPPBAndroidDownloadInfo *downloadInfo;
@property (nonatomic) BOOL hasDownloadInfo;
@property (retain, nonatomic) IESGCPPBAndroidPackageInfo *packageInfo;
@property (nonatomic) BOOL hasPackageInfo;
@property (copy, nonatomic) NSString *developer;
@property (copy, nonatomic) NSString *productDescURL;
@property (retain, nonatomic) IESGCPPBAppStoreInfo *appStoreInfo;
@property (nonatomic) BOOL hasAppStoreInfo;
@property (copy, nonatomic) NSString *activeLink;
@property (copy, nonatomic) NSString *openGameURL;
@property (retain, nonatomic) IESGCPPBIOSPackageInfo *iosPackageInfo;
@property (nonatomic) BOOL hasIosPackageInfo;
@property (copy, nonatomic) NSString *gameName;
@property (nonatomic) int gameStageType;
@property (nonatomic) BOOL isDownloadSupport;
@property (nonatomic) int downloadStatus;

+ (id)descriptor;

@end
