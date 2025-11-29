@class NSString, AWESearchCorrectModel, AWESearchFrequencyManager, NSDictionary, AWESearchHarmfulCategoryManager, AWERiskPreventModel, UIViewController, NSNumber;

@interface AWESearchBaseManager : NSObject

@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL isRecommend;
@property (nonatomic) long long count;
@property (copy, nonatomic) NSString *keyWord;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL isRequestOnAir;
@property (copy, nonatomic) NSString *correctName;
@property (retain, nonatomic) AWERiskPreventModel *riskPreventModel;
@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) BOOL fromHotSearch;
@property (retain, nonatomic) NSDictionary *logPassback;
@property (nonatomic) BOOL shouldHideCorrection;
@property (retain, nonatomic) AWESearchCorrectModel *correctModel;
@property (nonatomic) BOOL isSwitchTab;
@property (copy, nonatomic) NSString *previousSearchID;
@property (copy, nonatomic) NSString *previousTab;
@property (copy, nonatomic) NSString *initialSearchSource;
@property (copy, nonatomic) NSDictionary *searchRequestLogQueries;
@property (weak, nonatomic) UIViewController *refViewController;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *ecomScene;
@property (retain, nonatomic) AWESearchFrequencyManager *frequencyManager;
@property (retain, nonatomic) AWESearchHarmfulCategoryManager *harmfulCategoryManager;

- (void).cxx_destruct;
- (id)init;

@end
