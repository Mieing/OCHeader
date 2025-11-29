@class NSString, NSMutableArray, UICollectionView;

@interface IESIMCollectionViewFirstFrameTracker : NSObject <IESIMCollectionViewFirstFrameTrackerProtocol>

@property (weak, nonatomic) UICollectionView *container;
@property (nonatomic) double beginReloadTime;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSMutableArray *taskSources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadDataWithCompletion:(id /* block */)a0 forceLayout:(BOOL)a1;
- (void)cancelLatestTrackIfNeeded;
- (void)registerLoadTaskToCell:(id)a0;
- (void)p_prepareForReuse;
- (void)p_didEndReload;
- (void).cxx_destruct;
- (void)reloadDataWithCompletion:(id /* block */)a0;

@end
