@class NSString, NSMutableDictionary, PAGView, MMFinderLiveTaskId, FinderLiveHotCommentAnimationInfoList, MMFinderLiveResDownloadManager, MMLiveQueue;
@protocol MMLiveHotAnimationViewPresenter;

@interface MMLiveHotAnimationViewModel : NSObject <WCFinderLiveExt, PAGViewListener>

@property (retain, nonatomic) MMFinderLiveResDownloadManager *animationDownLoadManager;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) FinderLiveHotCommentAnimationInfoList *animationInfoList;
@property (retain, nonatomic) NSMutableDictionary *processedAnimationInfoDic;
@property (retain, nonatomic) MMLiveQueue *animationQueue;
@property (weak, nonatomic) PAGView *curHotCommentAnimationView;
@property (weak, nonatomic) id<MMLiveHotAnimationViewPresenter> viewPresenter;
@property (nonatomic) BOOL currentAnimationLandscape;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 animationInfo:(id)a1;
- (void)dealloc;
- (void)registerExtension;
- (void)unregisterExtension;
- (void)initData;
- (void)initAnimationResource;
- (void)tryToPlayNextAnimation;
- (id)findInfoForResource:(id)a0;
- (id)loadPAGFileWith:(id)a0;
- (void)realPlayAnimationWith:(id)a0;
- (void)onFinderLive:(id)a0 receiveHotAnimation:(id)a1;
- (void)onAnimationStart:(id)a0;
- (void)onAnimationEnd:(id)a0;
- (void)onAnimationCancel:(id)a0;
- (void)onAnimationRepeat:(id)a0;
- (id)liveTask;
- (void).cxx_destruct;

@end
