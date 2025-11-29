@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeOpenGuideDSSharePanelMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *button_text;
@property (copy, nonatomic) NSString *enter_from;
@property (copy, nonatomic) NSString *enter_method;
@property (copy, nonatomic) NSString *activity_type;
@property (nonatomic) BOOL need_with_text;
@property (retain, nonatomic) NSNumber *message_type;
@property (copy, nonatomic) NSString *message_content;
@property (copy, nonatomic) NSString *open_schema;
@property (copy, nonatomic) NSDictionary *track_ext;

+ (id)requiredKeyPaths;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
