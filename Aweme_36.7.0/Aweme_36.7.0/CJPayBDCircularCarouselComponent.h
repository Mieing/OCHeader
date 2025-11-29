@class NSString, NSArray;
@protocol CJPayUIComponentTextModel;

@interface CJPayBDCircularCarouselComponent : JSONModel

@property (copy, nonatomic) NSString *componentType;
@property (retain, nonatomic) NSArray<CJPayUIComponentTextModel> *atomicComponentList;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (id)getTrackParams;
- (void).cxx_destruct;

@end
