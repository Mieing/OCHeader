@class NSString;

@interface CGSEIInfoModel : NSObject <BDModelCustom>

@property (copy, nonatomic) NSString *check_id;
@property (nonatomic) long long frame_index;
@property (nonatomic) long long interval_ms;
@property (nonatomic) long long os_type;
@property (nonatomic) BOOL hasTouchDelay;
@property (nonatomic) int minCheckId;
@property (nonatomic) int maxCheckId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)modelCustomMappingOptions;

- (void).cxx_destruct;
- (id)init;

@end
