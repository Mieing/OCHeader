@class AWEAwemeResponseModel, AWEMVChannelPageContext, AWEMVChannelDataController;

@interface AWEMVChannelRequestAdvanceManager : NSObject

@property (retain, nonatomic) AWEMVChannelDataController *dataController;
@property (copy, nonatomic) AWEAwemeResponseModel *preloadData;
@property (nonatomic) unsigned long long prefetchStatus;
@property (retain, nonatomic) AWEMVChannelPageContext *pageContext;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly, nonatomic) BOOL isFetching;

+ (id)sharedInstance;

- (void)initialFetch;
- (BOOL)preloadValid;
- (BOOL)checkDataIsEnough:(id)a0;
- (void)makeDataUnavailable;
- (void)cancelFetchRequest;
- (void).cxx_destruct;
- (void)refreshData;

@end
