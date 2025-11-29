@class NSString, NSMutableArray, AWELandscapePageContext;

@interface AWELandscapeFeedControllerManager : AWEShellControllerManager <AWELandscapeFeedControllerProtocol>

@property (retain, nonatomic) NSMutableArray *controllers;
@property (retain, nonatomic) AWELandscapePageContext *pageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)classNameArray;
- (void)updatePlayTime:(double)a0 canPlayTime:(double)a1 totalTime:(double)a2;
- (id)aAWEPadModuleAdapter;
- (void)currentPlayVideoDidChangePlayState:(long long)a0;
- (id)getClassArray;
- (void)addCommonControllers;
- (void)addPadController;
- (void)addLongVideoController;
- (void)addLiveController;
- (void)addScreenCastController;
- (void)addBackgroundPiPController;
- (void)addBackgroundPlayNextController;
- (void)addBackgroundPlayController;
- (void)addMultiDeviceHandoffController;
- (void)setupWithPageContext:(id)a0;
- (void).cxx_destruct;
- (void)setScrollEnabled:(BOOL)a0;
- (void)play;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)pause;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)stop;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupCollectionView:(id)a0;

@end
