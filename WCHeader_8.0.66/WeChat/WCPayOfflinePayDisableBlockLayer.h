@class NSString, NSArray;

@interface WCPayOfflinePayDisableBlockLayer : NSObject <PBCoding>

@property (nonatomic) unsigned int block_layer_report_id;
@property (nonatomic) BOOL is_show;
@property (nonatomic) unsigned int action_type;
@property (retain, nonatomic) NSString *tiny_app_username;
@property (retain, nonatomic) NSString *tiny_app_path;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSArray *text_info_array;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_block_layer_report_id;
+ (void)PBArrayAdd_is_show;
+ (void)PBArrayAdd_action_type;
+ (void)PBArrayAdd_tiny_app_username;
+ (void)PBArrayAdd_tiny_app_path;
+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_text_info_array;
+ (void)initialize;
+ (id)modelContainerPropertyMappingForConfigTag:(id)a0;
+ (id)getLocalDisableBlockLayerData;
+ (BOOL)saveDisableBlockLayerData:(id)a0;
+ (void)removeDisableBlockLayerData;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
