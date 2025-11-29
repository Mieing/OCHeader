@class NSString, NSDictionary, NSArray;

@interface AWEDTOBeautyModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *categoryId;
@property (copy, nonatomic) NSDictionary *selectedBeautyMap;
@property (copy, nonatomic) NSDictionary *beautyValueMap;
@property (copy, nonatomic) NSDictionary *selectedAlbumMap;
@property (copy, nonatomic) NSString *beautyPanelType;
@property (copy, nonatomic) NSArray *appliedEffectIds;
@property (copy, nonatomic) NSArray *recordBeautyNames;
@property (copy, nonatomic) NSArray *recordBeautyValues;
@property (copy, nonatomic) NSString *recordBeautyNamesString;
@property (copy, nonatomic) NSArray *editBeautyNames;
@property (copy, nonatomic) NSArray *editBeautyValues;
@property (copy, nonatomic) NSString *editBeautyNamesString;
@property (nonatomic) BOOL userHasChangedBeautyEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
