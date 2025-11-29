@class NSNumber, NSString, NSArray;

@interface AWEIMXBridgeImGetRelationListMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *count;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *sceneType;
@property (retain, nonatomic) NSNumber *dataType;
@property (retain, nonatomic) NSNumber *groupMinCount;
@property (retain, nonatomic) NSArray *groupCategory;
@property (retain, nonatomic) NSArray *blockGroupList;

+ (id)requiredKeyPaths;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
