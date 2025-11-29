@class NSString, AWEClientAILLMResourceDownloadConfig;

@interface AWEClientAILLMResourceConfig : NSObject <BDModelCustom, AWEClientAILLMResourceConfig>

@property (copy, nonatomic) NSString *model_name;
@property (nonatomic) BOOL preload_before_forward;
@property (nonatomic) long long release_for_idl_time;
@property (nonatomic) BOOL from_pitaya;
@property (nonatomic) BOOL release_after_forward;
@property (copy, nonatomic) NSString *model_url;
@property (retain, nonatomic) AWEClientAILLMResourceDownloadConfig *download_config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;

- (void).cxx_destruct;
- (id)init;

@end
