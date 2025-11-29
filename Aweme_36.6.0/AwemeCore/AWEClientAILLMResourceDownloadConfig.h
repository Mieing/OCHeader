@class NSString;

@interface AWEClientAILLMResourceDownloadConfig : NSObject <BDModelCustom>

@property (nonatomic) BOOL download_wifi_only;
@property (nonatomic) BOOL download_background_enable;
@property (nonatomic) BOOL download_at_forward;
@property (nonatomic) double throttle_net_speed;
@property (nonatomic) long long delete_time;
@property (nonatomic) long long required_network_level;
@property (nonatomic) unsigned long long storage_size;
@property (nonatomic) unsigned long long memory_size;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;

@end
