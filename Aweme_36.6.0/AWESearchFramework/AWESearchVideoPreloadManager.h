@class NSString;
@protocol AWEFeedPreloadManagerProtocol;

@interface AWESearchVideoPreloadManager : NSObject <AWEFeedPreloadManagerDelegate>

@property (nonatomic) BOOL p_enableVideoPreload;
@property (nonatomic) BOOL p_enableVideoPreloadCancel;
@property (copy, nonatomic) NSString *p_preloadBizScene;
@property (retain, nonatomic) id<AWEFeedPreloadManagerProtocol> p_preloadManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)preloadVideoModel:(id)a0;
- (void)preloadVideoModel:(id)a0 referString:(id)a1;
- (void)preloadVideoWithModels:(id)a0 fromIndex:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;

@end
