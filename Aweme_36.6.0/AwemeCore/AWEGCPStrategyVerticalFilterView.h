@class NSArray, IESGCPVerticalCollectionView, IESGCPDetailFilterConfig, UIView, NSString;
@protocol AWEGCPStrategyVerticalFilterViewDelegate;

@interface AWEGCPStrategyVerticalFilterView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate>

@property (retain, nonatomic) IESGCPVerticalCollectionView *collectionView;
@property (copy, nonatomic) NSArray *words;
@property (retain, nonatomic) UIView *upperView;
@property (retain, nonatomic) IESGCPDetailFilterConfig *filterConfig;
@property (nonatomic) BOOL isFullScreen;
@property (weak, nonatomic) id<AWEGCPStrategyVerticalFilterViewDelegate> delegate;
@property (readonly, nonatomic) long long selectedIndex;
@property (retain, nonatomic) UIView *greyView;
@property (copy, nonatomic) id /* block */ disMissHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithWords:(id)a0 selectedIndex:(long long)a1;
- (void)packUpButtonDidClick;
- (void)updateWithSelectedIndex:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)setupView;
- (void)refreshLayout;

@end
