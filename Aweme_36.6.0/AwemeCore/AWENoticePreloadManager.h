@class NSDictionary;

@interface AWENoticePreloadManager : NSObject {
    void /* function */ preloadListDataControllers;
}

@property (class, nonatomic, readonly) AWENoticePreloadManager *sharedInstance;

@property (nonatomic, copy) NSDictionary *preloadListDataControllers;

- (void)updateLastestActionTimeWithPreloadInfo:(id)a0;
- (id)copy;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopy;
- (void)dealloc;

@end
