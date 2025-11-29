@class NSString;

@interface BDXBridgeOpenFaceSharePanelMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *sec_exercise_user_id;
@property (copy, nonatomic) NSString *sec_answer_user_id;
@property (copy, nonatomic) NSString *sec_exercise_id;
@property (copy, nonatomic) NSString *from_page;
@property (copy, nonatomic) NSString *share_config;
@property (nonatomic) BOOL only_send_message;
@property (copy, nonatomic) NSString *cid;
@property (copy, nonatomic) NSString *activity_enter_from;
@property (copy, nonatomic) NSString *activity_enter_method;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
