@class NSString;

@interface CJPayRetainRecommendInfoModel : JSONModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *topRetainButtonText;
@property (copy, nonatomic) NSString *bottomRetainButtonText;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
