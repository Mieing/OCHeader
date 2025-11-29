@class AWEFeedPreloadManager, UITableViewCell, NSString;
@protocol AWEAwemeContainerTableViewCellPreloadProtocol;

@interface AWEAwemeDetailPrerenderVideoController : NSObject <AWEAwemeDetailPrerenderVideoProtocol>

@property (weak, nonatomic) UITableViewCell<AWEAwemeContainerTableViewCellPreloadProtocol> *preloadedCell;
@property (weak, nonatomic) AWEFeedPreloadManager *preloadVideoManager;
@property (nonatomic) double cellPrerenderDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupportPrerenderAdvanceInner:(id)a0;

- (void)checkIfNeedPrerenderVideo:(id)a0 model:(id)a1;
- (BOOL)isOptimize;
- (void)executePrepareForDisplay:(id)a0;
- (BOOL)noCheckPreloadSizeEnable;
- (void)prepareForDisplayWithCell:(id)a0;
- (void)scheduleCellPrepareForDisplay:(id)a0 model:(id)a1;
- (void)cancelCellPrepareForDisplay;
- (id)initWithFeedPreloadManager:(id)a0;
- (void).cxx_destruct;

@end
