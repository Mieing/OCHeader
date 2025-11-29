@class NSString, NSDictionary;

@interface CJPayPromotionSceneMapping : JSONModel

@property (copy, nonatomic) NSString *promotionScene;
@property (copy, nonatomic) NSDictionary *operateScene;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (BOOL)isOperateSceneCompletelyMatch:(id)a0;
- (void).cxx_destruct;

@end
