@interface HMDCDConfig : HMDModuleConfig

@property (nonatomic) unsigned long long minFreeDiskUsageMB;
@property (nonatomic) unsigned long long maxCDFileSizeMB;
@property (nonatomic) unsigned long long maxCDZipFileSizeMB;
@property (nonatomic) BOOL dumpNSException;
@property (nonatomic) BOOL dumpCPPException;
@property (nonatomic) BOOL dumpWhenExceptionThrow;

+ (id)hmd_attributeMapDictionary;
+ (id)configKey;

- (id)getModule;

@end
