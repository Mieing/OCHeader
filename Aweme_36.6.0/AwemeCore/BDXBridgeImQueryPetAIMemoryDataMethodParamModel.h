@class NSString, NSNumber;

@interface BDXBridgeImQueryPetAIMemoryDataMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *conShortId;
@property (copy, nonatomic) NSString *conId;
@property (retain, nonatomic) NSNumber *isSyncData;
@property (retain, nonatomic) NSNumber *isDeleteDataRefresh;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
