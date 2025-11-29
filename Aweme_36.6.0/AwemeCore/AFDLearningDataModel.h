@class AWEAwemeModel, NSString, NSArray, AFDLearningRecommendReasonModel, AFDLearningCommonLynxCardModel, AFDLearningActivityCardModel, AFDLearningSortInfoModel, NSNumber;

@interface AFDLearningDataModel : AWEBaseApiModel

@property (nonatomic) long long type;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AFDLearningRecommendReasonModel *reasonModel;
@property (nonatomic) BOOL isRelative;
@property (nonatomic) BOOL isFromInterestLabel;
@property (retain, nonatomic) AFDLearningActivityCardModel *activityCard;
@property (retain, nonatomic) AFDLearningSortInfoModel *sortInfo;
@property (copy, nonatomic) NSString *chosenCoverURL;
@property (copy, nonatomic) NSString *recommandDesc;
@property (copy, nonatomic) NSArray *commentList;
@property (retain, nonatomic) NSNumber *cardType;
@property (retain, nonatomic) AFDLearningCommonLynxCardModel *commonLynxCard;

+ (id)awemeJSONTransformer;
+ (id)commentListJSONTransformer;
+ (id)reasonModelJSONTransformer;
+ (id)commonLynxCardJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
