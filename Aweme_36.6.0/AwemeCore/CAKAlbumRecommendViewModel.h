@class NSArray, CAKAlbumSearchOperation, NSString, NSOperationQueue, CAKAlbumTracker, CAKAlbumSearchResult, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CAKAlbumRecommendViewModel : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) CAKAlbumSearchResult *recommendResult;
@property (retain, nonatomic) NSOperationQueue *recommendOperationQueue;
@property (weak) CAKAlbumSearchOperation *recommendOperation;
@property (nonatomic) BOOL isEnvSetup;
@property (nonatomic) BOOL shouldCancelTimerRecommend;
@property (nonatomic) long long recommendStatus;
@property (retain, nonatomic) CAKAlbumTracker *tracker;
@property (nonatomic) long long recommendType;
@property (retain, nonatomic) NSString *recommendText;
@property (retain, nonatomic) NSArray *recommendKeyWords;
@property (nonatomic) long long recommendEnterFrom;
@property (nonatomic) long long validAssetCount;
@property (nonatomic) BOOL readyForRecommend;

+ (BOOL)shouldShowRecommendTab;

- (void)setupEnvIfNeededWithMediaTypeArray:(id)a0;
- (BOOL)hasRecommendResult;
- (void)cancelTimerRecommend;
- (void)startTimerRecommend;
- (BOOL)shouldContinueQuery;
- (void)recommendWithCompletion:(id /* block */)a0;
- (void)cancelRecommend;
- (void)searchWithQuery:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
