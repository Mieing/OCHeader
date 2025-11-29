@class WebSearchContext, WCSearchUIConfig;

@interface WebSearchUseCase : NSObject

@property (retain, nonatomic) WebSearchContext *context;
@property (retain, nonatomic) WCSearchUIConfig *uiConfig;
@property (copy, nonatomic) id /* block */ onSearchVCWillAppear;
@property (copy, nonatomic) id /* block */ searchTransitionCompletion;

+ (void)preHeartSearchH5Page;
+ (BOOL)liteAppHomePageEnaled;
+ (BOOL)liteAppHomePageEnaledWithHitExptReport:(BOOL)a0;

- (id)initWithParams:(id)a0;
- (id)initWithParams:(id)a0 uiConfig:(id)a1;
- (id)initWithContextMode:(id /* block */)a0;
- (void)startWithMoveTabOnPage:(id)a0 tansitionType:(unsigned long long)a1;
- (void)startOnPage:(id)a0 tansitionType:(unsigned long long)a1;
- (void)startOnPage:(id)a0 tansitionType:(unsigned long long)a1 animated:(BOOL)a2;
- (void)startOnPage:(id)a0 tansitionType:(unsigned long long)a1 fromSearchBar:(id)a2;
- (void)startOnPage:(id)a0 tansitionType:(unsigned long long)a1 fromSearchBar:(id)a2 animated:(BOOL)a3;
- (void)__startOnPage:(id)a0 tansitionType:(unsigned long long)a1 fromSearchBar:(id)a2 animated:(BOOL)a3;
- (void)configSheetAdapter:(id)a0;
- (BOOL)_jumpSearchByLiteappFrom:(id)a0;
- (id)h5URLParams;
- (void)_didStartWith:(id)a0;
- (void).cxx_destruct;

@end
