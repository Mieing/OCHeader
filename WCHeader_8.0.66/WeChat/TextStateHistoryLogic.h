@class TextStateHistoryInfo, NSString, WCCgiBlockHelper, NSData, NSMutableIndexSet, NSMutableArray, TextStateHistoryCalendar;
@protocol TextStateHistoryLogicDelegate;

@interface TextStateHistoryLogic : NSObject <TextStateCardListDataProvider, TextStateCardListDelegate, TextStateMgrExt, MultipleTextStateCardViewDataSource>

@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *sceneSessionId;
@property (retain, nonatomic) TextStateHistoryCalendar *calendar;
@property (retain, nonatomic) WCCgiBlockHelper *summaryCgiBlockHelper;
@property (nonatomic) BOOL hasCacheData;
@property (retain, nonatomic) NSData *pagingContext;
@property (nonatomic) BOOL finished;
@property (retain, nonatomic) NSMutableArray *infoList;
@property (retain, nonatomic) NSMutableIndexSet *completeInfoIndexes;
@property (retain, nonatomic) TextStateHistoryInfo *pivotInfo;
@property (nonatomic) unsigned long long pivotInfoIndex;
@property (nonatomic) BOOL fetchingData;
@property (weak, nonatomic) id<TextStateHistoryLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)fetchDataForTextStateIdList:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (id)historyInfoListCachePath;

- (id)init;
- (void)refreshSceneSessionId;
- (void)resetSummaryFetchState;
- (void)fetchSummaryWithCompletionHandler:(id /* block */)a0;
- (BOOL)isFetchingSummary;
- (BOOL)hasFinishedFetchingSummary;
- (void)saveCache;
- (id)cardListDataProvider;
- (id)cardListDelegate;
- (void)pivotCardListIndexForInfo:(id)a0;
- (void)fetchDataFromPivotWithCompletionHandler:(id /* block */)a0;
- (void)fetchDataFromIndex:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)fetchDataFromKey:(unsigned long long)a0 count:(unsigned long long)a1 withCompletionHandler:(id /* block */)a2;
- (unsigned long long)targetIndexForFetchingDataAtIndex:(unsigned long long)a0;
- (void)checkFetchDataAtIndex:(unsigned long long)a0;
- (void)deleteHistoryInfo:(id)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)count;
- (unsigned long long)beginIndex;
- (void)configureCardView:(id)a0 atIndex:(unsigned long long)a1;
- (void)onTapMoreForCardView:(id)a0 textState:(id)a1;
- (void)onTapMoreForActivateTextState:(id)a0 cardView:(id)a1 memCache:(id)a2;
- (void)onTextStateUpdateForUserName:(id)a0;
- (void)onChangeToCardAtIndex:(unsigned long long)a0;
- (void)configureSingleCardView:(id)a0 forMultipleCardView:(id)a1;
- (void).cxx_destruct;

@end
