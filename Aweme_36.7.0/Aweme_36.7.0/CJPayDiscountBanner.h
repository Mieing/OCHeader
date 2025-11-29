@class NSString;

@interface CJPayDiscountBanner : JSONModel

@property (copy, nonatomic) NSString *banner;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *stayTime;
@property (copy, nonatomic) NSString *gotoType;
@property (copy, nonatomic) NSString *resourceNo;
@property (copy, nonatomic) NSString *picUrl;
@property (copy, nonatomic) NSString *jumpUrl;
@property (nonatomic) long long sequence;
@property (nonatomic) long long showTime;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
