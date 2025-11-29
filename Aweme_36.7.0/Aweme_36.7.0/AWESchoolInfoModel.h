@class NSString;

@interface AWESchoolInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *province;
@property (copy, nonatomic) NSString *city;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
