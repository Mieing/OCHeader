@class NSString;

@interface CJPayBindCardCachedIdentityInfoModel : JSONModel

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *identity;
@property (nonatomic) unsigned long long selectedIDType;
@property (copy, nonatomic) NSString *nationalityCode;
@property (copy, nonatomic) NSString *nationalityDesc;
@property (nonatomic) double cachedBeginTime;

+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
