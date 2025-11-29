@class WCFinderDataService, WCFinderProfilePreloadTask;

@interface WCFinderProfilePreloadHelper : NSObject

@property (weak, nonatomic) WCFinderDataService *dataService;
@property (retain, nonatomic) WCFinderProfilePreloadTask *fetchingTask;
@property (nonatomic) BOOL useNewCGI;

- (id)initWithDataService:(id)a0;
- (BOOL)contentVMShouldPreload:(id)a0 playPosition:(double)a1;
- (unsigned long long)skipPreloadInterval;
- (BOOL)couldPreloadUsername:(id)a0;
- (void)preload:(id)a0 filledPreloadInfo:(id)a1;
- (void)_wakePreload;
- (void)_startPrload;
- (void)_finishPreloadCGI:(id)a0;
- (void)preloadHeaderCGI:(id)a0;
- (void)preloadHomeCGI:(id)a0;
- (void)preloadUserPageCGI:(id)a0;
- (long long)cgiFlag;
- (void).cxx_destruct;

@end
