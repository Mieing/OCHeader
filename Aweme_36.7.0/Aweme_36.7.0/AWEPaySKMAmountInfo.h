@class NSString;

@interface AWEPaySKMAmountInfo : JSONModel

@property (nonatomic) long long total;
@property (copy, nonatomic) NSString *currency;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
