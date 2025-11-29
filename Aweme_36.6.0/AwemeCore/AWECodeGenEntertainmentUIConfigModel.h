@class NSArray, AWECodeGenPreviewConfigModel, NSString, AWECodeGenEntertainmentBlockCardInfoModel, AWECodeGenEntertainmentItemLabelModel;

@interface AWECodeGenEntertainmentUIConfigModel : AWEBaseDataModel

@property (copy, nonatomic) NSArray *flowBottomButtonsModelArray;
@property (copy, nonatomic) NSArray *blockCardButtonsModelArray;
@property (retain, nonatomic) AWECodeGenEntertainmentItemLabelModel *itemLabelInfoModel;
@property (retain, nonatomic) AWECodeGenPreviewConfigModel *previewConfigModel;
@property (copy, nonatomic) NSString *maskText;
@property (retain, nonatomic) AWECodeGenEntertainmentItemLabelModel *universalCoverLabelModel;
@property (copy, nonatomic) NSArray *landscapePreviewButtonsModelArray;
@property (copy, nonatomic) NSArray *landscapeBlockButtonsModelArray;
@property (retain, nonatomic) AWECodeGenEntertainmentBlockCardInfoModel *blockCardInfoModel;
@property (copy, nonatomic) NSString *landMaskText;
@property (copy, nonatomic) NSArray *guidanceButtonsModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
