@class DVEVideoClipViewModel, DVEVideoClipView, NSString;
@protocol DVETrackEventProtocol;

@interface DVEVideoClipViewController : DVEBaseBarController <DVEBaseBarTopViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, DVEVideoClipEditDelegate>

@property (retain, nonatomic) DVEVideoClipViewModel *viewModel;
@property (retain, nonatomic) DVEVideoClipView *videoClipView;
@property (nonatomic) BOOL isPlayingBeforeTouch;
@property (weak, nonatomic) id<DVETrackEventProtocol> eventTracker;
@property (nonatomic) BOOL hasEditedRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel;
- (BOOL)dismissWithType:(unsigned long long)a0;
- (void)saveEdit:(id /* block */)a0;
- (BOOL)isSupportAudioEdit;
- (void)topView:(id)a0 didClickCancelButton:(id)a1 resetHeadCompletion:(id /* block */)a2;
- (void)topView:(id)a0 didClickApplyButton:(id)a1;
- (void)updateCurrentPlayTime:(double)a0;
- (void)timelineDragging;
- (void)updateClipRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 slot:(id)a1;
- (void)trackSelectRangeEvent;
- (void)p_refreshPlayerTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)p_updateContentOffsetWithTime:(double)a0;
- (void)p_updateForcePlayFlag:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)slotOfIndex:(long long)a0;
- (void)p_trackSaveRangeEvent;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)viewDidLoad;
- (void)setupUI;
- (void)setupData;

@end
