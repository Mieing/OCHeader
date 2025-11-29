@class NSArray, NSDictionary, NSString, AWEGeneralSearchBackgroundModel, AWESearchKeyWordModel, AWEGuideSearchWordsExtraModel;

@interface AWESearchVerticalDataController : AWESearchCachalotDataController

@property (nonatomic) BOOL isSearchSourceGS;
@property (copy, nonatomic) NSArray *guideSearchWordList;
@property (retain, nonatomic) AWEGuideSearchWordsExtraModel *guideSearchWordsExtra;
@property (nonatomic) BOOL isFilterSearch;
@property (retain) NSDictionary *logPassback;
@property (retain, nonatomic) AWESearchKeyWordModel *keyword;
@property (copy, nonatomic) NSString *hideWords;
@property (nonatomic) BOOL hiddenFilter;
@property (retain, nonatomic) NSString *requestID;
@property (retain, nonatomic) AWEGeneralSearchBackgroundModel *verticalSearchBackgroundConfig;

- (Class)customResponseClass;
- (Class)customRequestParamsClass;
- (void)refreshResponse:(id)a0;
- (void).cxx_destruct;

@end
