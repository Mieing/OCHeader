@class NSString, NSDictionary, AWESearchDynamicTabModel;

@interface AWESearchTabModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *tabType;
@property (copy, nonatomic) NSString *tabName;
@property (nonatomic) long long feedType;
@property (retain, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) AWESearchDynamicTabModel *dynamicConfig;
@property (nonatomic) long long contanerType;
@property (copy, nonatomic) NSString *originTabType;
@property (nonatomic) BOOL isDefaultLanding;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isEqualToTabModel:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
