@class NSString, NSDictionary;

@interface AWELiteLuckycatTopMessageXBridgeModel : BDXBridgeModel

@property (copy, nonatomic) NSString *activityName;
@property (copy, nonatomic) NSString *btnText;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSDictionary *contentConfig;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDictionary *titleConfig;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
