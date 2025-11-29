@class NSString, UICollectionView, UICollectionViewFlowLayout, WAMainFrameTaskBarSectionWeAppView, WAMainFrameTaskBarSectionMyWeAppView;
@protocol WAMainFrameTaskBarSectionWeAppContainerDelegate, WAMainFrameTaskBarSectionWeAppViewDelegate;

@interface WAMainFrameTaskBarSectionWeAppContainerView : WAMainFrameTaskBarSectionBaseView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *layout;
@property (nonatomic) BOOL cellOnceCreated;
@property (weak, nonatomic) id<WAMainFrameTaskBarSectionWeAppContainerDelegate, WAMainFrameTaskBarSectionWeAppViewDelegate> delegate;
@property (retain, nonatomic) WAMainFrameTaskBarSectionWeAppView *weAppView;
@property (retain, nonatomic) WAMainFrameTaskBarSectionMyWeAppView *myWeAppView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)topAreaHeight;
+ (double)contentHeightWithWeAppViewModel:(id)a0 myWeAppViewModel:(id)a1;

- (id)title;
- (void)initView;
- (void)initCollectionView;
- (void)layoutSubviews;
- (void)onClickSearch;
- (void)reload;
- (id)createLayout;
- (void)animateChangeSectionHeight;
- (void)deleteCollectionViewSections:(id)a0;
- (void)reloadCommUsedSection;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)weAppSectionData;
- (id)arrWeAppItem;
- (id)arrMyWeAppItem;
- (id)weAppViewModel;
- (id)myWeAppViewModel;
- (void).cxx_destruct;

@end
