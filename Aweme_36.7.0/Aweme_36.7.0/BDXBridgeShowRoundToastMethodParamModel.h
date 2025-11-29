@class NSString, NSNumber;

@interface BDXBridgeShowRoundToastMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *highlightText;
@property (nonatomic) BOOL withArrowIcon;
@property (retain, nonatomic) NSNumber *offsetY;
@property (copy, nonatomic) NSString *highlightLabelClickSchema;

+ (id)requiredKeyPaths;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
