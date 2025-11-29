@class NSString, WAMainListStarLogic;

@interface WAMyStarListViewModel : WAStarListViewModel <WAMainListStarLogicDelegate> {
    NSString *m_showSessionId;
}

@property (retain, nonatomic) WAMainListStarLogic *starLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (long long)count;
- (BOOL)hasData;
- (BOOL)isReachLimit;
- (long long)getStarNumberLimitation;
- (id)dataForIndex:(long long)a0;
- (void)refreshData;
- (BOOL)canMove;
- (void)moveItemFrom:(long long)a0 toIndex:(long long)a1;
- (BOOL)deleteItem:(long long)a0;
- (void)onItemDeleted:(id)a0 index:(long long)a1;
- (void)reportOnViewDidAppear;
- (void)reportDestopOpWithAppItem:(id)a0 eventId:(unsigned long long)a1;
- (void)reportStarListViewShowAction;
- (void)appItemDidStaredSuccess:(id)a0;
- (void)appItemDidUnStaredSuccess:(id)a0;
- (void)appItemDidUnStaredFailedWithUnknownError:(id)a0;
- (void)starDataDidUpdated;
- (void).cxx_destruct;

@end
