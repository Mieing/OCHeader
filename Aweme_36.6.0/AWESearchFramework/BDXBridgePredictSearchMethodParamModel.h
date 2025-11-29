@class NSString, NSNumber, NSDictionary;

@interface BDXBridgePredictSearchMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *predict_type;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *search_word;
@property (copy, nonatomic) NSString *enter_method;
@property (copy, nonatomic) NSString *target_tab;
@property (copy, nonatomic) NSString *client_engine_extra;
@property (copy, nonatomic) NSString *client_server_extra;
@property (copy, nonatomic) NSString *search_from;
@property (copy, nonatomic) NSString *predict_id;
@property (copy, nonatomic) NSString *search_pass_params_struct;
@property (copy, nonatomic) NSString *search_style;
@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *from;
@property (retain, nonatomic) NSNumber *needBack2Origin;
@property (copy, nonatomic) NSString *gid;
@property (copy, nonatomic) NSString *group_id;
@property (retain, nonatomic) NSNumber *comment_panel_is_opened;
@property (copy, nonatomic) NSString *enter_from;
@property (copy, nonatomic) NSString *enter_page;
@property (retain, nonatomic) NSNumber *deep_think;
@property (copy, nonatomic) NSString *targetContainerID;
@property (copy, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) NSNumber *is_new_predict_search;
@property (retain, nonatomic) NSNumber *request_mode;
@property (copy, nonatomic) NSString *schema;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
