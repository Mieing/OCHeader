@class MMKV, NSPointerArray, XPlayTrackCenter, XPlayNetworkTask, NSLock, XPlaySceneConfig;
@protocol XPlayInnerMessageInterface, XPlaySocketManagerProtocol;

@interface XPlayManager : NSObject

@property (retain, nonatomic) XPlayTrackCenter *trackCenter;
@property BOOL isRequesting;
@property (retain, nonatomic) XPlayNetworkTask *networkTask;
@property (retain, nonatomic) XPlayNetworkTask *preConnectNetworkTask;
@property (retain, nonatomic) NSLock *lock;
@property (nonatomic) BOOL didPreload;
@property (retain, nonatomic) XPlaySceneConfig *sceneConfig;
@property (readonly, nonatomic) id<XPlayInnerMessageInterface> messageInterface;
@property (retain, nonatomic) MMKV *sharedMMKV;
@property (retain, nonatomic) id<XPlaySocketManagerProtocol> socketManager;
@property (retain, nonatomic) NSPointerArray *itemArray;
@property (readonly, nonatomic) long long activeItems;

+ (Class)configurationClassWithCore:(id)a0;
+ (Class)itemClassWithCore:(id)a0;
+ (id)sharedManager;

- (void)cancelLoadItemIfNeeded;
- (void)loadPlayItemWithConfiguration:(id)a0 callback:(id /* block */)a1;
- (BOOL)canNoticeChangeToFHD;
- (void)refreshNoticeFHDTime;
- (void)preloadSceneWithConfig:(id)a0;
- (id)generateUniqueId;
- (void)p_loadPlayItemWithConfiguration:(id)a0 callback:(id /* block */)a1;
- (id)itemWithId:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)init;

@end
