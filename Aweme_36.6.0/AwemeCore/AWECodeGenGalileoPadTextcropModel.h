@class NSArray;

@interface AWECodeGenGalileoPadTextcropModel : AWEBaseDataModel

@property (copy, nonatomic) NSArray *ipadDHCutRatioArray;
@property (copy, nonatomic) NSArray *ipadDVCutRatioArray;
@property (copy, nonatomic) NSArray *androidDHCutRatioArray;
@property (copy, nonatomic) NSArray *androidDVCutRatioArray;
@property (nonatomic) long long version;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
