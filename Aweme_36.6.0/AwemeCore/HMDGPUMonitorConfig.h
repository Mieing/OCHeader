@interface HMDGPUMonitorConfig : HMDMonitorConfig

@property (nonatomic) BOOL enableAppRecovery;
@property (nonatomic) BOOL traceCommandBuffer;
@property (nonatomic) BOOL enableShaderValidation;

+ (id)hmd_attributeMapDictionary;
+ (id)configKey;

- (id)getModule;

@end
