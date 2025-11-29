@class NSString, UIView, NSMutableArray, IESLLPOIDetailUGCPhotosPreviewViewController;
@protocol IESLLLoadingParticleViewInterface, BDXViewContainerProtocol;

@interface IESLLPOIUGCCommentDataProvider : NSObject <IESLLPOIUGCPreviewViewControllerLoadMoreDelegate, IESLLPOIUGCPreviewViewControllerBounceDelegate>

@property (copy, nonatomic) NSString *containerID;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hasPrevious;
@property (copy, nonatomic) NSString *requestRawParams;
@property (nonatomic) long long preloadStep;
@property (nonatomic) BOOL loadMoreIsRequestOnAir;
@property (nonatomic) BOOL loadPreviousIsRequestOnAir;
@property (retain, nonatomic) NSMutableArray *subscribers;
@property (retain, nonatomic) UIView<IESLLLoadingParticleViewInterface> *loadingView;
@property (weak, nonatomic) IESLLPOIDetailUGCPhotosPreviewViewController *photosPreviewViewController;
@property (weak, nonatomic) UIView<BDXViewContainerProtocol> *lynxRateView;
@property (retain, nonatomic) NSMutableArray *commentModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resetLoadingView;
- (long long)thresholdForLoadInPhotosPreviewVC;
- (void)previewVCLoadMorePhotosWithCommentOrder:(long long)a0;
- (void)previewVCLoadPreviousPhotosWithCommentOrder:(long long)a0;
- (void)previewVCHandleRightBounceWithCommentOrder:(long long)a0;
- (void)previewVCHandleLeftBounceWithCommentOrder:(long long)a0;
- (void)registeSubscribers;
- (void)subscribeNewCommentData;
- (void)subscribeLikeRateAction;
- (void)requestMoreCommentData:(long long)a0 order:(long long)a1;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)dealloc;
- (void)showLoadingView;

@end
