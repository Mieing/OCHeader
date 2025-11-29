@class WebSearchContext, WCSearchUIConfig;

@interface WCSearchPageState : NSObject

@property (retain, nonatomic) WebSearchContext *data;
@property (nonatomic) BOOL isFromVertical;
@property (retain, nonatomic) WCSearchUIConfig *uiConfig;
@property (nonatomic) unsigned long long contentType;
@property (nonatomic) BOOL isEditting;

- (id)initWithParams:(id)a0 uiConfig:(id)a1;
- (void)refreshData;
- (BOOL)isBrandVertSearch;
- (BOOL)isSubSearch;
- (BOOL)isImageSearch;
- (BOOL)isFromDiscoverSearch;
- (BOOL)isVertSearh;
- (BOOL)isBackButtonDirectExit;
- (BOOL)isShowCancelButton;
- (BOOL)isShowBackButton;
- (BOOL)isShowCancelButtonByExpt;
- (BOOL)initiativeImageSearchEnabled;
- (BOOL)needEditingAtBegining;
- (void).cxx_destruct;

@end
