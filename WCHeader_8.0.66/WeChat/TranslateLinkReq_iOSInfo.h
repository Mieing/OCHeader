@class NSString;

@interface TranslateLinkReq_iOSInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) unsigned int schemeFlag;
@property (retain, nonatomic) NSString *universalLink;
@property (retain, nonatomic) NSString *sdkBundleId;

+ (void)initialize;

@end
