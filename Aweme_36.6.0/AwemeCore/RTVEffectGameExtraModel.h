@class NSNumber, NSString;

@interface RTVEffectGameExtraModel : JSONModel

@property (retain, nonatomic) NSNumber *minCount;
@property (retain, nonatomic) NSNumber *maxCount;
@property (copy, nonatomic) NSString *backgroundURLString;
@property (nonatomic) BOOL needCamera;
@property (copy, nonatomic) NSString *extra;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (id)extraName;
- (id)subtitle;
- (void).cxx_destruct;

@end
