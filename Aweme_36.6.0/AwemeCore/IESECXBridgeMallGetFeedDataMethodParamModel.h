@class NSNumber;

@interface IESECXBridgeMallGetFeedDataMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *section;
@property (retain, nonatomic) NSNumber *index;
@property (retain, nonatomic) NSNumber *frontCount;
@property (retain, nonatomic) NSNumber *followingCount;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
