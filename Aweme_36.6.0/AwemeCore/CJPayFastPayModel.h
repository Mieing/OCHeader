@interface CJPayFastPayModel : JSONModel

@property (nonatomic) long long timeOut;
@property (nonatomic) long long queryMaxTimes;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (long long)maxQueryTimes;

@end
