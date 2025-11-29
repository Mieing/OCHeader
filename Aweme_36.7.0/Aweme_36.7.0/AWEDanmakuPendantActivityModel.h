@class NSNumber, NSArray;

@interface AWEDanmakuPendantActivityModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *activityID;
@property (readonly, nonatomic) BOOL effectForAll;
@property (readonly, nonatomic) BOOL effectForInputView;
@property (readonly, copy, nonatomic) NSArray *matchList;
@property (readonly, copy, nonatomic) NSArray *includeList;
@property (readonly, copy, nonatomic) NSArray *pendantMaterials;

+ (id)pendantMaterialsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithActivityID:(id)a0 effectForAll:(BOOL)a1 matchList:(id)a2 includeList:(id)a3 pendantMaterials:(id)a4;
- (void).cxx_destruct;

@end
