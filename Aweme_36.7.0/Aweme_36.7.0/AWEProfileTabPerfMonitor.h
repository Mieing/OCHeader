@class NSNumber;

@interface AWEProfileTabPerfMonitor : NSObject

@property (retain, nonatomic) NSNumber *currentSession;
@property (retain, nonatomic) NSNumber *exposedSession;
@property (nonatomic) BOOL hadDraged;
@property (nonatomic) long long requestLevel;
@property (nonatomic) BOOL fromHome;
@property (nonatomic) long long scene;
@property (nonatomic) BOOL isCurrentUser;

- (void)trackInnerPageTransitionFailed:(long long)a0 extra:(id)a1;
- (void)beginRefreshRequest;
- (void)endRefreshRequest:(id)a0;
- (void)beginLoadMoreRequest;
- (void)endLoadMoreRequest:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;

@end
