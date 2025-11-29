@class NSString, NSArray, AWEURLModel;

@interface AWENearbyUtilityBottomBarModel : AWEBaseApiModel

@property (retain, nonatomic) AWEURLModel *iconURLModel;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long count;
@property (nonatomic) BOOL hotmap;
@property (nonatomic) long long pvCount;
@property (nonatomic) double videoLatitude;
@property (nonatomic) double videoLongitude;
@property (copy, nonatomic) NSString *uniqueCode;
@property (copy, nonatomic) NSArray *reportValues;

+ (id)iconURLModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValid;

@end
