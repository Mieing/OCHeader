@class AWEPerfLoadRequest, NSString, AWESmartFeedDataPreloadResult, AWEListDataController;

@interface AWEConcernDataPreloadManager : NSObject <AWEConcernDataPreloadManagerProtocol>

@property (retain, nonatomic) AWEListDataController *preloadDataController;
@property (nonatomic) BOOL hasLoadInitFeedData;
@property (nonatomic) BOOL isPredict;
@property (retain, nonatomic) AWESmartFeedDataPreloadResult *fetchResult;
@property (nonatomic) unsigned long long preloadHitType;
@property (retain, nonatomic) AWEPerfLoadRequest *perfRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)cleanDataSource;
- (void)trackTapPreloadHitWithHitType:(unsigned long long)a0;
- (void)preloadInitFeedDataWithPredict:(BOOL)a0;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
