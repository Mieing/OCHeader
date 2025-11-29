@class NSArray, NSString, NSDictionary, NSMutableDictionary, UIView, NSMutableArray, NSNumber;

@interface AWESearchGeneralCachalotRequestParamsContext : AWESearchVerticalRequestParamsBaseContext

@property (nonatomic) BOOL isFromHomePagePredict;
@property (retain, nonatomic) NSString *customStyle;
@property (retain, nonatomic) NSMutableArray *frontAdShowTimes;
@property (nonatomic) unsigned long long refreshType;
@property (retain, nonatomic) NSString *preSearchID;
@property (nonatomic) BOOL isChallengePage;
@property (retain, nonatomic) NSString *backtrace;
@property (retain, nonatomic) NSString *fromGroupId;
@property (retain, nonatomic) NSDictionary *paramsToEngine;
@property (nonatomic) BOOL shouldHideCorrection;
@property (retain, nonatomic) NSNumber *doubleColumnMode;
@property (nonatomic) BOOL isDoubleColumnLeft;
@property (retain, nonatomic) NSDictionary *logPassback;
@property (copy, nonatomic) NSString *extraServerClientParams;
@property (nonatomic) BOOL isSearchHalfScreenLoadmore;
@property (retain, nonatomic) NSString *recentItems;
@property (retain, nonatomic) NSString *sendBackList;
@property (retain, nonatomic) NSDictionary *searchExtraParams;
@property (retain, nonatomic) NSDictionary *filterParams;
@property (retain, nonatomic) NSString *anchorQueryID;
@property (copy, nonatomic) NSDictionary *suggestWordsExtra;
@property (retain, nonatomic) NSNumber *shouldStoreHistory;
@property (retain, nonatomic) NSDictionary *consumerLastLoadMoreInfoDictionary;
@property (retain, nonatomic) NSDictionary *clientServerExtra;
@property (retain, nonatomic) NSString *bcmChainString;
@property (retain, nonatomic) NSNumber *fromHotSearch;
@property (retain, nonatomic) NSDictionary *addressDictionary;
@property (retain, nonatomic) NSString *clientExtra;
@property (retain, nonatomic) NSMutableDictionary *commentSearchData;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSDictionary *clientEngineExtra;
@property (nonatomic) BOOL isUseParamsProvider;
@property (nonatomic) BOOL manualSwitchColumn;
@property (nonatomic) BOOL isReSearch;
@property (nonatomic) long long doubleSingleSwitchTimes;
@property (nonatomic) double doubleColumnButtonStyle;
@property (retain, nonatomic) NSNumber *shouldRemitLiveCommerce;
@property (weak, nonatomic) UIView *containerView;
@property (nonatomic) BOOL isNotInGeneralSearch;
@property (retain, nonatomic) NSString *imageURI;
@property (nonatomic) double imageWidth;
@property (nonatomic) double imageHeight;
@property (nonatomic) BOOL DeepThinkIsOpen;
@property (copy, nonatomic) NSArray *impressionLog;
@property (nonatomic) BOOL needIsNewSession;
@property (retain, nonatomic) NSNumber *deepThinkState;
@property (retain, nonatomic) NSArray *querys;
@property (nonatomic) long long AISearchBarStatus;
@property (retain, nonatomic) NSDictionary *clarifiedQueryMap;

- (void).cxx_destruct;

@end
