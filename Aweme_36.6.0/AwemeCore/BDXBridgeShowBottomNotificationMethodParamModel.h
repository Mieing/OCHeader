@class NSString, NSNumber;

@interface BDXBridgeShowBottomNotificationMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSString *linkSchema;
@property (copy, nonatomic) NSString *linkText;
@property (retain, nonatomic) NSNumber *linkGrade;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
