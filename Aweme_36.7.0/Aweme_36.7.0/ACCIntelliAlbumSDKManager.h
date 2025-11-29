@class ACCCameraSubscription;

@interface ACCIntelliAlbumSDKManager : NSObject

@property (nonatomic) long long innerModeState;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (readonly, nonatomic) long long modelState;

+ (void)initializeIntelliAlbumSDKWithManater:(id)a0;
+ (id)ILALock;
+ (void)setupIntelliAlbumSDKABCallback;
+ (void)initializeIntelliAlbumSDK;
+ (id)shared;

- (void)clearSearchCache;
- (void)downloadModels;
- (id)beautifyWithAssetList:(id)a0 taskConfig:(id)a1 tagMap:(id)a2 progress:(id /* block */)a3 finish:(id /* block */)a4;
- (void)onClearCache;
- (void)handleMemoryWarningNotification;
- (void).cxx_destruct;
- (id)init;
- (void)addSubscriber:(id)a0;

@end
