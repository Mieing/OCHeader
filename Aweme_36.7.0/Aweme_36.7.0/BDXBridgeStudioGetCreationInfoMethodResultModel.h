@class NSNumber, NSArray;

@interface BDXBridgeStudioGetCreationInfoMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSArray *packLists;

+ (id)packListsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
