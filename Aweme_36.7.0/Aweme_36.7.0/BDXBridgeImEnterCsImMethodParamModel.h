@class NSString, NSNumber;

@interface BDXBridgeImEnterCsImMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *intelligent_task_id;
@property (copy, nonatomic) NSString *task_id;
@property (retain, nonatomic) NSNumber *session_id;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *entrance;
@property (copy, nonatomic) NSString *biz_type;
@property (copy, nonatomic) NSString *sub_biz_type;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
