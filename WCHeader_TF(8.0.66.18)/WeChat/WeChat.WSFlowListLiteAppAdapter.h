@class NSString;

@interface WeChat.WSFlowListLiteAppAdapter : NSObject {
    void /* unknown type, empty encoding */ liteAppView;
    void /* unknown type, empty encoding */ dicQuery;
    void /* unknown type, empty encoding */ currentLiteAppInfo;
    void /* unknown type, empty encoding */ hasLiteAppStart;
    void /* unknown type, empty encoding */ isLiteAppStarting;
    void /* unknown type, empty encoding */ snapshotCache;
    void /* unknown type, empty encoding */ reportExtraInfo;
}

@property (nonatomic, copy) NSString *reportExtraInfo;

- (id)init;
- (void)createLiteAppViewWithCurrentCell:(id)a0 renderFinishHandler:(id /* block */)a1;
- (void)replaceCardWithSnapshotOfCellWithCell:(id)a0;
- (void)setCachedSnapshotForCell:(id)a0 index:(long long)a1;
- (void)clearCachedSnapshot;
- (void)addLiteAppViewToCellWithCell:(id)a0 liteAppInfo:(id)a1 waitRenderFinish:(BOOL)a2 renderFinishHandler:(id /* block */)a3;
- (void)dispatchOnSwipePageWithModel:(id)a0;
- (void).cxx_destruct;

@end
