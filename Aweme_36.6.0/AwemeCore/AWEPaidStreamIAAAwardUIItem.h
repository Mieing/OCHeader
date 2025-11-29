@class NSString, AWECodeGenGrowthTaskRewardConfigModel, AWEURLModel;

@interface AWEPaidStreamIAAAwardUIItem : AWEBaseApiModel

@property (copy, nonatomic) NSString *titleFirstLine;
@property (copy, nonatomic) NSString *titleSecondLine;
@property (retain, nonatomic) AWEURLModel *coverURLModel;
@property (copy, nonatomic) NSString *confirmButtonText;
@property (copy, nonatomic) NSString *cancelButtonText;
@property (copy, nonatomic) NSString *confirmButtonTextGrowth;
@property (copy, nonatomic) NSString *toastTextGrowth;
@property (copy, nonatomic) AWECodeGenGrowthTaskRewardConfigModel *growthTaskRewardConfig;

+ (id)coverURLModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
