@class NSString;

@interface AWECodeGenBannerExtraInfoModel : AWEBaseDataModel

@property (nonatomic) BOOL exclusive;
@property (nonatomic) long long weight;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL enableSelect;
@property (copy, nonatomic) NSString *source;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
