@class NSMutableDictionary;

@interface AWEVideoBridgeHandler : NSObject

@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) NSMutableDictionary *dataLists;
@property (retain, nonatomic) NSMutableDictionary *callbacks;

+ (void)handleVideoPlayBridgeWithParams:(id)a0 callback:(id /* block */)a1;
+ (void)handleOpenAwemeDetailWithParams:(id)a0;
+ (void)handleAddAwemeVideosFromRNWithParams:(id)a0;
+ (void)handleMixVideoPlayBridgeWithParams:(id)a0 callback:(id /* block */)a1;
+ (void)fetchAwemesFromRN:(id)a0 page:(long long)a1 callback:(id /* block */)a2;
+ (void)fetchAwemesFromRN:(id)a0 previousPage:(long long)a1 callback:(id /* block */)a2;
+ (void)postFeedsStatusChangeNotficiationWithDataController:(id)a0;
+ (void)handleFeedsLoadWithParams:(id)a0;
+ (id)getFeedsFlowWithParams:(id)a0;
+ (BOOL)refreshAwemeModel:(id)a0;
+ (void)handleInfinteVideosBridgeWithParams:(id)a0 callback:(id /* block */)a1;
+ (void)handleLongVideoPlayBridgeWithParams:(id)a0 callback:(id /* block */)a1;
+ (id)sharedHandler;

- (void)addNotifications;
- (void)startPlay:(id)a0;
- (void)handleHotSpotVideoPlayBridgeWithParams:(id)a0 callback:(id /* block */)a1;
- (void)willLoop:(id)a0;
- (void)videoWebViewBroadcast:(id)a0;
- (void)lynxDealloc:(id)a0;
- (void)handleNotificationsWithAction:(long long)a0 userInfo:(id)a1;
- (void)clearDataListWithId:(id)a0;
- (void)removeNotificaitons;
- (void).cxx_destruct;
- (void)close:(id)a0;
- (void)stop:(id)a0;
- (id)init;
- (void)pause:(id)a0;

@end
