@class NSString, NSArray, AWECodeGenUrlModel, AWECodeGenEntertainmentItemLabelModel;

@interface AWECodeGenEntertainmentBlockCardInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *subTitleArray;
@property (copy, nonatomic) NSArray *tipTextArray;
@property (retain, nonatomic) AWECodeGenUrlModel *coverUrlModel;
@property (retain, nonatomic) AWECodeGenUrlModel *titleIconUrlModel;
@property (copy, nonatomic) NSArray *flowBottomButtonsModelArray;
@property (retain, nonatomic) AWECodeGenEntertainmentItemLabelModel *coverLabelModel;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
