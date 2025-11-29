@class NSArray;

@interface BDXBridgeStudioGetCreationInfoPackLists : BDXBridgeModel

@property (retain, nonatomic) NSArray *dataLists;

+ (id)dataListsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
