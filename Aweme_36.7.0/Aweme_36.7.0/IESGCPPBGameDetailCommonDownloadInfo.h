@class NSString, IESGCPPBOfficialPackageInfo;

@interface IESGCPPBGameDetailCommonDownloadInfo : GPBMessage

@property (nonatomic) BOOL isDownloadSupport;
@property (copy, nonatomic) NSString *downloadExtra;
@property (copy, nonatomic) NSString *antiHijackContent;
@property (copy, nonatomic) NSString *antiHijackImage;
@property (nonatomic) BOOL packageSizeSwitch;
@property (nonatomic) BOOL isForbidJumpIosApp;
@property (copy, nonatomic) NSString *iosAppId;
@property (copy, nonatomic) NSString *iosBundleId;
@property (copy, nonatomic) NSString *iosActiveURL;
@property (copy, nonatomic) NSString *iosPackageInfo;
@property (copy, nonatomic) NSString *openGameURL;
@property (nonatomic) BOOL hasGroupTask;
@property (copy, nonatomic) NSString *unsupportedDownloadToast;
@property (retain, nonatomic) IESGCPPBOfficialPackageInfo *officialPackageInfo;
@property (nonatomic) BOOL hasOfficialPackageInfo;

+ (id)descriptor;

@end
