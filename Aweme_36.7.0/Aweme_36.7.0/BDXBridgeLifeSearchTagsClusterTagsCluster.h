@class NSString, NSArray;

@interface BDXBridgeLifeSearchTagsClusterTagsCluster : BDXBridgeModel

@property (copy, nonatomic) NSString *tagId;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *localIds;

+ (id)localIdsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
