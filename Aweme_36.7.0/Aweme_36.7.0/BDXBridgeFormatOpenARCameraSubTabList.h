@class NSNumber, NSString;

@interface BDXBridgeFormatOpenARCameraSubTabList : BDXBridgeModel

@property (retain, nonatomic) NSNumber *priority;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *effectId;
@property (nonatomic) BOOL isDefault;

+ (id)requiredKeyPaths;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
