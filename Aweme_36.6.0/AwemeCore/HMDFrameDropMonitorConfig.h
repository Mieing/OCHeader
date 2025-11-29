@interface HMDFrameDropMonitorConfig : HMDMonitorConfig

@property (nonatomic) BOOL enableUploadStaticRecord;

+ (id)hmd_attributeMapDictionary;
+ (id)configKey;

- (id)getModule;

@end
