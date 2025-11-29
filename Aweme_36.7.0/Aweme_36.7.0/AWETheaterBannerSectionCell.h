@class AWETheaterIndentBannerView, AWETheaterPageContext, NSString, AWETheaterSectionModel;

@interface AWETheaterBannerSectionCell : UICollectionViewCell <DUXIndentBannerDelegate>

@property (retain, nonatomic) AWETheaterIndentBannerView *bannerView;
@property (retain, nonatomic) AWETheaterSectionModel *sectionModel;
@property (retain, nonatomic) AWETheaterPageContext *context;
@property (copy, nonatomic) id /* block */ nextLoopHandler;
@property (copy, nonatomic) id /* block */ resetHandler;
@property (copy, nonatomic) id /* block */ clickAction;
@property (copy, nonatomic) id /* block */ tapVolumeButtonBlock;
@property (copy, nonatomic) id /* block */ showVolumeButtonBlock;
@property (copy, nonatomic) id /* block */ logExtraDict;
@property (copy, nonatomic) id /* block */ lvideoLogExtraDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (long long)currentShowIndex;
- (long long)duxIndentBannerNumberOfItem;
- (id)duxIndentBannerCell:(id)a0 cellForItemAtIndex:(long long)a1;
- (void)duxIndentBannerCell:(id)a0 didEndDisplayingCellAtIndex:(long long)a1;
- (void)duxIndentBannerCell:(id)a0 willDisplayCellAtIndex:(long long)a1;
- (long long)getCurrentStyle;
- (void)updateCellPaymentWithModel:(id)a0;
- (void)stopLiveBanner;
- (void)trackCellWillDisappear;
- (id)currentSectionItem;
- (BOOL)currentShowIsVideo;
- (BOOL)isInCenterVisibleCell:(id)a0;
- (BOOL)enableTheaterBannerFix;
- (void)configWithSectionModel:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureConstraints;
- (void)configureSubviews;

@end
