@class WCTimelineSessionStatItem, NSString, WCMomentsCommentBrowseAggreReport, UIWindow, NSObject, MMTableView;
@protocol OS_dispatch_queue;

@interface WCSubTimelineSessionMgr : MMUserService <MMServiceProtocol> {
    MMTableView *m_tableView;
    WCTimelineSessionStatItem *sessionStatItem;
    unsigned int pId;
    NSString *pName;
    unsigned int seq;
    NSObject<OS_dispatch_queue> *queue;
    double screenHeight;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } statusRect;
    UIWindow *uiWindow;
    double statusNavHeight;
    double realScreenHeight;
    unsigned long long lastEnterBackgroundTime;
    BOOL isNowInTimelinePage;
    BOOL isHasScroll;
    unsigned long long reloadTime;
    NSString *nowGroupId;
    long long m_newFeedCount;
}

@property (retain, nonatomic) WCMomentsCommentBrowseAggreReport *commentBrowseAggreReporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)dealloc;
- (void)setGroupId:(id)a0;
- (void)setNewFeedCount:(long long)a0;
- (void)onViewWillBePoped:(BOOL)a0;
- (void)onViewWillBePushed:(BOOL)a0;
- (void)onSessionStart;
- (void)onSessionEnd;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)onReloadDataWrap;
- (void)onViewDidAppear:(BOOL)a0 withVC:(id)a1;
- (void)onViewDidDisappear:(BOOL)a0;
- (void)enterTimelinePage;
- (void)exitTimelinePage;
- (void)reconstructSessionStatItem:(unsigned long long)a0;
- (void)reportSessionStatItem:(unsigned long long)a0;
- (id)getSessionId;
- (void)addCommentOnFeed:(id)a0;
- (void)addLikeOnFeed:(id)a0;
- (void)addMediaTime:(double)a0 feedId:(id)a1;
- (void)addClickOnFeed:(unsigned long long)a0 feedId:(id)a1;
- (id)formatJsonStr:(id)a0;
- (id)getTimelineSessionStatItemAttrStr:(id)a0;
- (id)getTimelineSessionStatItemAttr:(id)a0 withDataArrays:(id)a1 withSubSeq:(unsigned long long)a2 withSubSeqSum:(unsigned long long)a3;
- (id)getFeedExposureDataAttr:(id)a0;
- (void)onScrollViewDidEndDecelerating:(id)a0;
- (void)onScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)onScrollViewDidScroll:(id)a0;
- (void)initTableViewAndHeight:(id)a0;
- (id)getTableView;
- (id)getTimelineSessionStatItem;
- (id)getTimelineExposureFeedId:(id)a0;
- (void)calcFeedExposureSizeAndTime:(id)a0 withStayed:(BOOL)a1 withTime:(unsigned long long)a2;
- (void)calcFeedExposureSizeAndTime:(id)a0 withEntered:(BOOL)a1 withTime:(unsigned long long)a2;
- (void)calcFeedExposureSizeAndTime2:(id)a0 withTime:(unsigned long long)a1;
- (double)tsTableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)tsTableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)tsTableView:(id)a0 calcDataItemIndex:(long long)a1;
- (id)findTableView:(id)a0;
- (void).cxx_destruct;

@end
