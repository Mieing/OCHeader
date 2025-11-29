@class NSString, NSArray, NSMutableDictionary, WeNoteDataController, NSMutableArray, MMTableView;
@protocol WNSearchLogicDelegate;

@interface WNSearchLogic : NSObject <WNContentSearchBaroperationDelegate> {
    NSArray *m_searchResultInfos;
    NSMutableArray *m_untreatedResultInfos;
    NSString *m_query;
    NSMutableDictionary *m_indexToCoverViews;
    unsigned long long m_curFocusIndex;
    BOOL m_needReFocusCurIndex;
}

@property (weak, nonatomic) MMTableView *tableView;
@property (weak, nonatomic) WeNoteDataController *dataController;
@property (weak, nonatomic) id<WNSearchLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)cancelSearch;
- (void)clearSearchStatus;
- (void)reloadSearchCoverView;
- (void)setMatchLocationArr:(id)a0 query:(id)a1;
- (void)handleMatchLocationsWithStartIndex:(long long)a0 endIndex:(long long)a1;
- (void)tryToReFocusCurIndex;
- (id)getCoverInfoWith:(id)a0 coverView:(id)a1 location:(unsigned long long)a2;
- (id)getSearchCoverViewWith:(id)a0;
- (void)tryToshowCoverViewAt:(id)a0;
- (void)changeFocusWithCurFocusIndex:(unsigned long long)a0 nextFocusIndex:(unsigned long long)a1;
- (void)setCoverInfo:(id)a0 enableFocus:(BOOL)a1 withRealIndex:(unsigned long long)a2 arrIndex:(unsigned long long)a3;
- (void)scrollCurFocusIndexVisible;
- (void)scrollFocusLocationVisible:(unsigned long long)a0;
- (unsigned long long)getArrIndexWith:(unsigned long long)a0;
- (unsigned long long)getPreTotalCountWith:(unsigned long long)a0;
- (void)tryToShowCoverViewOn:(id)a0;
- (void)onChangeFocusIndex:(unsigned long long)a0 to:(unsigned long long)a1;
- (void).cxx_destruct;

@end
