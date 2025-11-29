@class NSString, UIScrollView, NSMutableArray, UIView;
@protocol IESLLFusePOIDetailNGPageContextProtocol;

@interface AWEPOIAlbumTabs : UIView <UIScrollViewDelegate, AWEPOIAlbumCategoryProtocol>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *indicatorView;
@property (retain, nonatomic) UIView *bottomLineView;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) long long hasShowMaxOffsetx;
@property (retain, nonatomic) NSMutableArray *itemModels;
@property (retain, nonatomic) NSMutableArray *itemViews;
@property (nonatomic) long long currentTrackIndex;
@property (weak, nonatomic) id<IESLLFusePOIDetailNGPageContextProtocol> context;
@property (copy, nonatomic) id /* block */ onSelectBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSelectedIndex:(long long)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)trackShowTab;
- (void)layoutTabView;
- (void)updateIndicatorToIndex:(long long)a0 animated:(BOOL)a1;
- (void)adjustScrollViewOffsetWithPreTabView:(id)a0 currenTabView:(id)a1;
- (void)trackSwitchTab:(long long)a0 toIndex:(long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)setupUI;
- (void)loadData:(id)a0;

@end
