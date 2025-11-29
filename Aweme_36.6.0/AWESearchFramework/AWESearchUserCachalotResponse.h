@class AWESearchUserBusinessConfigModel, NSArray, AWESearchGlobalDoodleConfigModel, AWEDiscoverySearchFeedbackModel;

@interface AWESearchUserCachalotResponse : AWESearchResultCachalotDataResponse

@property (retain, nonatomic) AWESearchUserBusinessConfigModel *businessConfigModel;
@property (retain, nonatomic) AWESearchGlobalDoodleConfigModel *extraModel;
@property (retain, nonatomic) AWEDiscoverySearchFeedbackModel *feedbackModel;
@property (copy, nonatomic) NSArray *leafModels;

+ (id)feedbackModelJSONTransformer;
+ (id)businessConfigModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
