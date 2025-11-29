@class NSString;

@interface CJPayUnifyPayAgainDisplayInfoModel : JSONModel

@property (copy, nonatomic) NSString *showTips;
@property (copy, nonatomic) NSString *tips;
@property (copy, nonatomic) NSString *tipsUrl;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
