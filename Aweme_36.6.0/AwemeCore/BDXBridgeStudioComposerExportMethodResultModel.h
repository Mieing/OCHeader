@class NSString, NSNumber, NSArray;

@interface BDXBridgeStudioComposerExportMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *reactId;
@property (retain, nonatomic) NSNumber *useOrigin;
@property (retain, nonatomic) NSArray *respInstances;

+ (id)respInstancesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
