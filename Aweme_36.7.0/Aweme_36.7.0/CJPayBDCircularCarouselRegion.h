@class NSArray;
@protocol CJPayBDCircularCarouselComponent;

@interface CJPayBDCircularCarouselRegion : JSONModel

@property (nonatomic) long long intervalTime;
@property (nonatomic) long long animationTime;
@property (retain, nonatomic) NSArray<CJPayBDCircularCarouselComponent> *componentList;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (id)getTrackParams;
- (id)trackCarouselTitle;
- (void).cxx_destruct;

@end
