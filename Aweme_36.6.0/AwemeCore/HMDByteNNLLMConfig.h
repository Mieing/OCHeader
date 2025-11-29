@class NSString;

@interface HMDByteNNLLMConfig : HMDModuleConfig

@property (nonatomic) long long uploadStrategy;
@property (nonatomic) long long bytennAlogMaxSize;
@property (nonatomic) BOOL bytennAlogUseZstd;
@property (retain, nonatomic) NSString *bytennAlogUploadScene;

+ (id)hmd_attributeMapDictionary;
+ (id)configKey;

- (id)getModule;
- (void).cxx_destruct;

@end
