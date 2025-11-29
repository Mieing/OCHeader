@class NSString, NSArray;
@protocol CJPayPromotionSceneMapping;

@interface CJPayHomePagePromotionShowPriorityModel : JSONModel

@property (copy, nonatomic) NSString *firstRetainType;
@property (copy, nonatomic) NSString *secondRetainType;
@property (copy, nonatomic) NSString *firstPromotionScene;
@property (copy, nonatomic) NSString *secondPromotionScene;
@property (copy, nonatomic) NSString *thirdPromotionScene;
@property (copy, nonatomic) NSString *defaultXPromotionScene;
@property (copy, nonatomic) NSArray<CJPayPromotionSceneMapping> *promotionSceneMappingList;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (id)obtainPromotionScene:(id)a0;
- (void).cxx_destruct;

@end
