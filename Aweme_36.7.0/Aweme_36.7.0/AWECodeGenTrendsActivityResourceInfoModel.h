@class NSString;

@interface AWECodeGenTrendsActivityResourceInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *configurationId;
@property (copy, nonatomic) NSString *configurationType;
@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSString *icon;
@property (nonatomic) BOOL skipFrequencyControl;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
