@class NSString, NSDictionary, NSNumber;

@interface BDXBridgePublishEventMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSDictionary *params;
@property (retain, nonatomic) NSNumber *timestamp;
@property (nonatomic) BOOL isBroadcast;

+ (id)requiredKeyPaths;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
