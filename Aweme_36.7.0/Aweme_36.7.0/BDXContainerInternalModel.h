@class NSString, NSNumber;

@interface BDXContainerInternalModel : NSObject

@property (copy, nonatomic) NSString *container_bg_color;
@property (copy, nonatomic) NSString *container_bgcolor;
@property (copy, nonatomic) NSString *loading_bgcolor;
@property (copy, nonatomic) NSString *loading_bg_color;
@property (copy, nonatomic) NSString *surl;
@property (copy, nonatomic) NSString *bdx_tag;
@property (copy, nonatomic) NSString *bdx_launch_mode;
@property (retain, nonatomic) NSNumber *hide_loading;
@property (retain, nonatomic) NSNumber *show_loading;
@property (retain, nonatomic) NSNumber *show_error;
@property (retain, nonatomic) NSNumber *enable_advanced_monitor;
@property (nonatomic) BOOL disable_offline;
@property (copy, nonatomic) NSString *storage_keys;
@property (copy, nonatomic) NSString *user_domain_storage_keys;
@property (copy, nonatomic) NSString *bullet_storage_keys;
@property (copy, nonatomic) NSString *nativeTriggerShowHideEvent;
@property (copy, nonatomic) NSString *content_bg_color;
@property (copy, nonatomic) NSString *container_light_bg_color;
@property (copy, nonatomic) NSString *container_dark_bg_color;
@property (retain, nonatomic) NSNumber *enable_annie_jsb_for_common;

- (void).cxx_destruct;

@end
