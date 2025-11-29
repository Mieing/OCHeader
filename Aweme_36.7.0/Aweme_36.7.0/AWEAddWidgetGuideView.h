@class UIView, UILabel, NSArray, NSString, UIButton, UICollectionView, UIPageControl, AWEAddWidgetGuideCell;
@protocol AWEAddWidgetGuideViewDelegate;

@interface AWEAddWidgetGuideView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UIView *overlayView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIPageControl *pageControl;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *nextTitleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *nextDescLabel;
@property (retain, nonatomic) UIButton *bottomButton;
@property (retain, nonatomic) UIButton *nextBottomButton;
@property (nonatomic) long long currCellIndex;
@property (nonatomic) long long nextCellIndex;
@property (retain, nonatomic) AWEAddWidgetGuideCell *currCell;
@property (retain, nonatomic) AWEAddWidgetGuideCell *nextCell;
@property (retain, nonatomic) NSArray *models;
@property (weak, nonatomic) id<AWEAddWidgetGuideViewDelegate> delegate;
@property (readonly, nonatomic) BOOL isShowing;
@property (copy, nonatomic) NSString *widgetType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPadBizUIAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)refreshLayout:(long long)a0;
- (id)aAWEPadBizUIAdapter;
- (double)titleViewTopMargin;
- (void)setupTapGesture;
- (void)overlayViewTapAction:(id)a0;
- (void)trackUGWidgetGuideClickWithClickTarget:(id)a0;
- (void)clickToClose:(id)a0;
- (void)showWithContainer:(id)a0 useMask:(BOOL)a1;
- (void)updateCAMaskedCorners:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })guideImageSize;
- (BOOL)isIphoneLandscape;
- (double)potraitContentHeight;
- (double)collectionViewTopMargin;
- (double)buttonButtomMargin;
- (void)clickTapGesture:(id)a0;
- (void)trackGuideViewClickWithShowType:(long long)a0 clickTarget:(id)a1;
- (void)refreshWithModel:(id)a0 nextModel:(id)a1;
- (void)updateUIAlpha:(double)a0;
- (void)clickToNextStep:(id)a0;
- (double)landscapeContentWidget;
- (double)collectionViewBottomMargin;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)hide;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })contentSize;
- (void)scrollViewDidScroll:(id)a0;
- (void)setupSubviews;
- (id)initWithModels:(id)a0;

@end
