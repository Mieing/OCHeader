@class DVEMultipleTrackViewUpdater, DVEMultipleTrackUpdateTaskQueue;

@interface DVEMultipleTrackViewNew : DVEMultipleTrackView

@property (retain, nonatomic) DVEMultipleTrackUpdateTaskQueue *updaterTaskQueue;
@property (retain, nonatomic) DVEMultipleTrackViewUpdater *updater;

- (void)scrollCurrentClipCellToTop;
- (void)forceReloadTotalDataWithCompletion:(id /* block */)a0;
- (BOOL)shouldDealAttachablePointWithType:(unsigned long long)a0;
- (id)attachablePointsWithType:(unsigned long long)a0 selectedNode:(id)a1;
- (void)triggerFeedback;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(id)a1 viewModel:(id)a2;
- (void)dismissClipBoxWithAnimated:(BOOL)a0;
- (void)dismissLineBoxWithAnimated:(BOOL)a0;
- (void)refreshClipLineBox;
- (BOOL)p_isMultipleTrackSelected;
- (void)clipWithNode:(id)a0 animated:(BOOL)a1;
- (void)displayLineBoxForNode:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 animated:(BOOL)a2;
- (void)displayClipBoxForNode:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reloadDataWithCompletion:(id /* block */)a0;
- (void)scrollToBottom;
- (void)show:(id)a0 completion:(id /* block */)a1;
- (void)addObservers;

@end
