@class NSString, NSArray;

@interface BDPAppVideoAdvRevisitConfigModel : BDPBasePluginModel

@property (nonatomic) BOOL enable;
@property (nonatomic) double timeout_time;
@property (copy, nonatomic) NSString *btn_schema;
@property (copy, nonatomic) NSString *btn_text;
@property (copy, nonatomic) NSString *res_url;
@property (copy, nonatomic) NSArray *valid_launch_from;
@property (copy, nonatomic) NSArray *valid_enter_position;
@property (copy, nonatomic) NSArray *valid_ad_errcode;

- (void).cxx_destruct;

@end
