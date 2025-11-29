@class BDPWebViewPage;

@interface BDPSkeletonLoader : NSObject

@property (nonatomic) long long skeletonState;
@property (nonatomic) BOOL isReportedFP;
@property (weak, nonatomic) BDPWebViewPage *webViewPage;

- (void)registerSkeletonEvent;
- (id)skeletonPath;
- (void)pr_trackSkeletonShow;
- (void)loadSkeleton;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithPage:(id)a0;

@end
