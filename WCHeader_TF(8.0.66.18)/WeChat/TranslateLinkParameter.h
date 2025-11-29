@class NSString, SdkFinderInfo, AppmsgSignature3rd;

@interface TranslateLinkParameter : MMObject

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *link;
@property (nonatomic) unsigned int scene;
@property (copy, nonatomic) NSString *bundleId;
@property (nonatomic) unsigned int schemeFlag;
@property (copy, nonatomic) NSString *universalLink;
@property (copy, nonatomic) NSString *sdkBundleId;
@property (copy, nonatomic) NSString *sdkToken;
@property (copy, nonatomic) NSString *sdkVersion;
@property (nonatomic) unsigned int verifyScene;
@property (nonatomic) unsigned int tokenVerifyResult;
@property (nonatomic) BOOL isWXLaunchByUniversalLink;
@property (nonatomic) BOOL isAutoResend;
@property (retain, nonatomic) SdkFinderInfo *finderInfo;
@property (retain, nonatomic) AppmsgSignature3rd *appmsgSignature3rd;

- (id)description;
- (void).cxx_destruct;

@end
