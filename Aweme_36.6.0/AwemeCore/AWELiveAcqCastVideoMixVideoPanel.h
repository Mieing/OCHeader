@class AWELiveAcqMixVideoDetailListView, AWEMixVideoModel;

@interface AWELiveAcqCastVideoMixVideoPanel : AWELiveAcqCastVideoBasePanel

@property (retain, nonatomic) AWEMixVideoModel *mixVideoModel;
@property (retain, nonatomic) AWELiveAcqMixVideoDetailListView *detailView;

- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (void)onClickBack;
- (void).cxx_destruct;
- (void)refreshData;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
