@class UICollectionViewCell, NSMutableArray, NSDictionary, IESLiveProbePlayerStreamTracker, NSString, NSIndexPath, IESLiveInnerFeedContext;
@protocol IESLiveInnerFeedCellPreloadViewControllerProtocol, IESLiveInnerFeedPreloadCellProtocol;

@interface IESLiveInnerFeedCellPreloadController : NSObject <IESLiveInnerFeedDisplayAction, IESLiveInnerFeedCellPreloadService>

@property (retain, nonatomic) NSIndexPath *preloadIndexPath;
@property (retain, nonatomic) UICollectionViewCell<IESLiveInnerFeedPreloadCellProtocol> *preloadCell;
@property (weak, nonatomic) id<IESLiveInnerFeedCellPreloadViewControllerProtocol> viewController;
@property (retain, nonatomic) IESLiveInnerFeedContext *context;
@property (retain, nonatomic) IESLiveProbePlayerStreamTracker *tracker;
@property (retain, nonatomic) NSMutableArray *preloadTaskTokenArray;
@property (retain, nonatomic) NSDictionary *wormholeConfig;
@property (retain, nonatomic) NSDictionary *preloadOptimizeConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithViewController:(id)a0 context:(id)a1;
- (void)innerFeedDidDisappear;
- (void)schedulePreloadNextCell:(id)a0;
- (id)fetchPreloadCellAtIndexPath:(id)a0;
- (void)cancelCellUnderlyingPreloading;
- (void)preloadNextCell:(id)a0;
- (BOOL)probePlayerStreamEnable:(id)a0 duration:(long long *)a1;
- (void)restoreCurrentRoomStrategy:(id)a0;
- (void).cxx_destruct;

@end
