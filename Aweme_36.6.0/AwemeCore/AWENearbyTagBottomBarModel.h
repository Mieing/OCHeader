@class NSString, NSArray, AWEURLModel;

@interface AWENearbyTagBottomBarModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *vedioId;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) AWEURLModel *icon;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long frequencyLimit;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSArray *reportValues;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
