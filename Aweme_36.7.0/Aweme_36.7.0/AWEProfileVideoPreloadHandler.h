@class NSMutableDictionary;

@interface AWEProfileVideoPreloadHandler : NSObject

@property (retain, nonatomic) NSMutableDictionary *preloadedAwemeInfo;
@property (retain, nonatomic) NSMutableDictionary *clickedAwemeInfo;
@property (nonatomic) long long scene;
@property (nonatomic) BOOL isFromHome;

- (long long)preloadSize;
- (void)preload:(id)a0 completion:(id /* block */)a1;
- (void)tabBarDidChangeNotification:(id)a0;
- (void)didEnterVideoDetailPage:(id)a0;
- (void)trackPreloadEventIfNeed;
- (void).cxx_destruct;
- (id)group;
- (void)dealloc;

@end
