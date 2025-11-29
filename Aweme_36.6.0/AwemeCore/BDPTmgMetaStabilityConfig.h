@class NSArray, NSString;

@interface BDPTmgMetaStabilityConfig : NSObject

@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSArray *metaDomains;
@property (nonatomic) BOOL disableExpiredMetaUseNew;
@property (nonatomic) BOOL disableCacheMetaUpdateDirectly;
@property (nonatomic) BOOL disableCommonUpdateOpti;
@property (nonatomic) BOOL disableMetaCompleteCheck;
@property (nonatomic) BOOL disableMetaFailedDowngradeOpti;
@property (nonatomic) BOOL disableAutoCdnMeta;
@property (copy, nonatomic) NSString *cdnTTcodeVersion;
@property (copy, nonatomic) NSString *cdnEncryKey;
@property (copy, nonatomic) NSString *cdnEncryIv;
@property (nonatomic) BOOL disablePkgDownloadFailedDowngradeOpti;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
