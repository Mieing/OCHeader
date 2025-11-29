@class IESGCPPBAppStoreInfo, NSString;

@interface IESGCPPBIOSPackageInfo : GPBMessage

@property (retain, nonatomic) IESGCPPBAppStoreInfo *appStoreInfo;
@property (nonatomic) BOOL hasAppStoreInfo;
@property (copy, nonatomic) NSString *openGameURL;
@property (copy, nonatomic) NSString *clickIdNature;

+ (id)descriptor;

@end
