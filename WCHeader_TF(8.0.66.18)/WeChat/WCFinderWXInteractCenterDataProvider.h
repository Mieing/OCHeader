@class WCFinderBaseCgi, NSArray, NSString, NSMutableSet, NSHashTable, NSMutableArray, NSData;

@interface WCFinderWXInteractCenterDataProvider : NSObject <WCFinderInteractiveDetailListDataProvider>

@property (retain, nonatomic) NSHashTable *observerTable;
@property (retain, nonatomic) NSMutableArray *mutableItems;
@property (retain, nonatomic) NSMutableSet *tidContainSet;
@property (retain, nonatomic) NSMutableSet *collectionIDSet;
@property (nonatomic) unsigned long long state;
@property (nonatomic) long long selectType;
@property (nonatomic) long long favoritesDataType;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL continueFlag;
@property (retain, nonatomic) WCFinderBaseCgi *cgi;
@property (nonatomic) long long favSelectedSubTabIndex;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSArray *itemContentVMs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)convertTabTypeToTabFlag:(long long)a0;
+ (long long)genAllTabFlag;
+ (int)genFlowCommentSceneByType:(long long)a0;
+ (int)genDetailCommentSceneByType:(long long)a0;

- (void)dealloc;
- (id)init;
- (id)initWithType:(long long)a0;
- (void)registerObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)dataLoadLocal;
- (void)dataFetchSuc:(BOOL)a0;
- (void)dataFetchWillHandle:(BOOL)a0;
- (void)dataFail;
- (void)dataAppendFromIndex:(long long)a0 toIndex:(long long)a1;
- (void)triggerFetchActionBySelectType:(long long)a0 dataType:(long long)a1;
- (void)_loadFirstPageData;
- (void)_registerItem:(id)a0;
- (void)_insertDataWithNewItems:(id)a0;
- (void)resetContentInfo;
- (id)subTabList;
- (long long)selectedSubTabIndex;
- (unsigned long long)flowViewState;
- (BOOL)hasMoreData;
- (void)deleteItemAtIndex:(long long)a0;
- (void)fetchNextPage;
- (id)contentVMAtIndex:(long long)a0;
- (id)getWXInteractiveListCgiWithType:(long long)a0 commentScene:(int)a1;
- (void)_didRecivedCGIList:(id)a0 type:(long long)a1 commentScene:(int)a2;
- (void).cxx_destruct;

@end
