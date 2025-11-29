@class NSNumber, NSArray;

@interface AWEDanmakuEggActivityModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *activityID;
@property (readonly, nonatomic) BOOL effectForAll;
@property (readonly, copy, nonatomic) NSArray *matchList;
@property (readonly, copy, nonatomic) NSArray *includeList;
@property (readonly, copy, nonatomic) NSArray *eggMaterials;

+ (id)eggMaterialsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithActivityID:(id)a0 effectForAll:(BOOL)a1 matchList:(id)a2 includeList:(id)a3 eggMaterials:(id)a4;
- (void).cxx_destruct;

@end
