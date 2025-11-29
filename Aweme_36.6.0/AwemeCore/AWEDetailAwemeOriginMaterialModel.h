@class NSString, NSDictionary;

@interface AWEDetailAwemeOriginMaterialModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long materialType;
@property (copy, nonatomic) NSString *materialID;
@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *memoryEffectId;
@property (nonatomic) long long mvType;
@property (nonatomic) long long AIGCtype;
@property (copy, nonatomic) NSString *materialData;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
