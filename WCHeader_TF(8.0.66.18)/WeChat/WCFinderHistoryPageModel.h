@class WCFinderStreamLoadingState, NSString;

@interface WCFinderHistoryPageModel : NSObject <WCFinderInteractiveTab>

@property (nonatomic) int scene;
@property (nonatomic) int supportItemFlag;
@property (retain, nonatomic) WCFinderStreamLoadingState *loadingState;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *iconName;
@property (retain, nonatomic) NSString *selectedItemName;
@property (nonatomic) int tabType;
@property (nonatomic) int searchTabType;
@property (nonatomic) unsigned long long requestId;
@property (retain, nonatomic) NSString *noMoreTips;
@property (copy, nonatomic) id /* block */ historyRecordDayUpdateBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)formatHistoryTime:(long long)a0;
+ (void)requestFeedForList:(id)a0 feedArray:(id)a1 page:(id)a2;

- (id)initWithTitle:(id)a0 icon:(id)a1 selectedIcon:(id)a2 scene:(int)a3 tabType:(int)a4 searchTabTab:(int)a5 supportItemFlag:(int)a6;
- (BOOL)hasContent;
- (void)doRequestFirstPage:(id /* block */)a0;
- (void)doRequestNextPage:(id /* block */)a0;
- (void)requestFirstPage:(id /* block */)a0;
- (void)requestNextPage:(id /* block */)a0;
- (void)onClear;
- (void)onDeleteFeed:(id)a0;
- (void)dispatchRequest:(id /* block */)a0 complete:(id /* block */)a1;
- (void).cxx_destruct;

@end
