@class UIImageView, UIViewController, NSString;
@protocol AWEYearMemoryLoadingVCProtocol;

@interface AWEPhotoPreAggregateHelper : NSObject <AWEPhotoAggregateLoadingActionDelegate, AWEPhotoDownLoadingActionDelegate>

@property (copy, nonatomic) id /* block */ aggregateCompletion;
@property (copy, nonatomic) id /* block */ downloadingCompletion;
@property (nonatomic) BOOL preloading;
@property (nonatomic) BOOL isRequestingCityCode;
@property (weak, nonatomic) UIViewController<AWEYearMemoryLoadingVCProtocol> *vc;
@property (retain, nonatomic) UIImageView *placeholderView;
@property (nonatomic) double startTime;
@property (nonatomic) long long total;
@property (nonatomic) BOOL isCache;
@property (nonatomic) long long memoryType;
@property (nonatomic) long long aggregateCost;
@property (nonatomic) BOOL aggregateTimeOut;
@property (nonatomic) long long resDownloadTime;
@property (nonatomic) BOOL isTemplateCache;
@property (nonatomic) long long templateDownloadCost;
@property (nonatomic) long long templateApplyCost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)apiModelFromSchema:(id)a0;
+ (BOOL)checkMemoryPhotoLibraryAccessAuthorization;
+ (void)requestAlbumAccessAuthorization:(id /* block */)a0;
+ (id)addLimitCount:(id)a0;
+ (id)addYearMemoryTrackSchema:(id)a0 param:(id)a1;
+ (struct CGSize { double x0; double x1; })targetSizeForAsset:(id)a0;
+ (id)userID;
+ (id)sharedHelper;

- (void)startPreDownloadVideoWithSchema:(id)a0;
- (void)requestCityMessageWithCompletion:(id /* block */)a0;
- (void)updateProgressWithNum:(double)a0;
- (void)requestForAuthorization:(id /* block */)a0;
- (void)startForAggregateWithProgress:(id /* block */)a0 taskId:(id)a1 completion:(id /* block */)a2;
- (void)didCompleteDownloadAndLimitDuration:(id)a0;
- (void)startPreloadWithVC:(id)a0 taskId:(id)a1;
- (void)completeAggregateWithAssetIds:(id)a0 taskId:(id)a1 isCache:(BOOL)a2 assets:(id)a3;
- (void)requestPHImages:(id)a0 isCache:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)hasCacheBeforeDownload:(id)a0;
- (BOOL)hasCacheBeforeAggregate;
- (void)startPreloadWithConfig:(id)a0 completion:(id /* block */)a1;
- (void)leaveLoadVC;
- (void)dimissLoadVC;
- (void)startDownloadVideoWithSchema:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
