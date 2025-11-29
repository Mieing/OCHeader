@class NSString, AWECodeGenUrlModel, AWECodeGenCEMAdditionalInfoModel, AWECodeGenAwemeModel, AWECodeGenCEMButtonModel;

@interface AWECodeGenCEMBannerModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long bannerId;
@property (retain, nonatomic) AWECodeGenUrlModel *imageUrlModel;
@property (retain, nonatomic) AWECodeGenCEMButtonModel *buttonModel;
@property (retain, nonatomic) AWECodeGenCEMAdditionalInfoModel *additionalInfoModel;
@property (retain, nonatomic) AWECodeGenAwemeModel *awemeModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
