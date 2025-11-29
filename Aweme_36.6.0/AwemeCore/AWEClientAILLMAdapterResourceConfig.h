@class NSString, AWEClientAILLMResourceDownloadConfig;

@interface AWEClientAILLMAdapterResourceConfig : NSObject <BDModelCustom, AWEClientAILLMResourceConfig>

@property (nonatomic) float scale;
@property (nonatomic) BOOL from_pitaya;
@property (nonatomic) BOOL release_after_forward;
@property (copy, nonatomic) NSString *model_url;
@property (retain, nonatomic) AWEClientAILLMResourceDownloadConfig *download_config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;
- (id)init;

@end
