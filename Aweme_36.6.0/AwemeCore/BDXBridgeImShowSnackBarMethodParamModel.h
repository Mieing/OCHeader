@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeImShowSnackBarMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *contentText;
@property (copy, nonatomic) NSString *rightText;
@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSNumber *conversationType;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
