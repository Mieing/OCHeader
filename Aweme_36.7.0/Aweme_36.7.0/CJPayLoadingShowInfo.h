@class NSString;

@interface CJPayLoadingShowInfo : JSONModel

@property (nonatomic) long long minTime;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *url;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
