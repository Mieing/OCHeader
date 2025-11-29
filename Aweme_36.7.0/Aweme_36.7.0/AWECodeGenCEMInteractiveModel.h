@class NSString, AWECodeGenUserModel, AWECodeGenCEMInteractiveContentModel, AWECodeGenCEMInteractiveTitleModel, NSArray, AWECodeGenAwemeModel, AWECodeGenCEMAdditionalInfoModel;

@interface AWECodeGenCEMInteractiveModel : AWEBaseDataModel

@property (retain, nonatomic) AWECodeGenCEMInteractiveTitleModel *titleModel;
@property (retain, nonatomic) AWECodeGenCEMInteractiveContentModel *contentModel;
@property (retain, nonatomic) AWECodeGenUserModel *userInfoModel;
@property (copy, nonatomic) NSArray *actionBarListModelArray;
@property (retain, nonatomic) AWECodeGenAwemeModel *awemeModel;
@property (retain, nonatomic) AWECodeGenCEMAdditionalInfoModel *additionalInfoModel;
@property (copy, nonatomic) NSString *scheme;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
