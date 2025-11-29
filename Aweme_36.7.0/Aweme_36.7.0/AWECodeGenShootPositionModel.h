@class AWECodeGenShootPositionBusinessInfoModel, NSString, NSArray, AWECodeGenOperationLabelModel, AWECodeGenUserModel, AWECodeGenLocationInfoModel, AWECodeGenShareModel, AWECodeGenSicilyUrlModel, AWECodeGenStatsLabelModel, AWECodeGenShootSuggestionModel, AWECodeGenCoverThemeColorModel, AWECodeGenShootPositionStatsModel;

@interface AWECodeGenShootPositionModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *modelID;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) AWECodeGenUserModel *authorInfoModel;
@property (copy, nonatomic) NSArray *coverUrlListModelArray;
@property (copy, nonatomic) NSArray *coverUrlListMediumModelArray;
@property (copy, nonatomic) NSArray *originCoverUrlListMediumModelArray;
@property (retain, nonatomic) AWECodeGenSicilyUrlModel *iconModel;
@property (retain, nonatomic) AWECodeGenLocationInfoModel *locationInfoModel;
@property (copy, nonatomic) NSArray *guideListModelArray;
@property (retain, nonatomic) AWECodeGenShootSuggestionModel *shootSuggestModel;
@property (retain, nonatomic) AWECodeGenShootSuggestionModel *moreSuggestModel;
@property (retain, nonatomic) AWECodeGenShootPositionStatsModel *statsModel;
@property (retain, nonatomic) AWECodeGenShareModel *shareInfoModel;
@property (retain, nonatomic) AWECodeGenOperationLabelModel *operationLabelModel;
@property (retain, nonatomic) AWECodeGenStatsLabelModel *statsLabelModel;
@property (retain, nonatomic) AWECodeGenCoverThemeColorModel *coverThemeColorModel;
@property (retain, nonatomic) AWECodeGenShootPositionBusinessInfoModel *businessInfoModel;
@property (retain, nonatomic) AWECodeGenSicilyUrlModel *navBarIconModel;
@property (copy, nonatomic) NSString *recommendDesc;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSArray *mixIdArray;
@property (copy, nonatomic) NSArray *bestCoverUrlListModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
