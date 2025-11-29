@class UIView, MMLiveScrollGradientMaskingView, NSArray, UICollectionViewFlowLayout, NSString, UIButton, UICollectionView, UILabel;
@protocol MMFinderLiveStickerTextTemplatesPageSheetDelegate;

@interface MMFinderLiveStickerTextTemplatesPageSheet : MMPageSheetBaseView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) NSArray *templateItems;
@property (nonatomic) unsigned long long result;
@property (retain, nonatomic) UIView *customTitleBarView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIView *collectionContainerView;
@property (retain, nonatomic) MMLiveScrollGradientMaskingView *collectionViewMaskingView;
@property (retain, nonatomic) UICollectionViewFlowLayout *templatesCollectionViewLayout;
@property (retain, nonatomic) UICollectionView *templatesCollectionView;
@property (weak, nonatomic) id<MMFinderLiveStickerTextTemplatesPageSheetDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTemplateItems:(id)a0 selectedIndex:(unsigned long long)a1;
- (double)pageSheetContentWidth;
- (void)pageSheetDidClose:(BOOL)a0;
- (void)pageSheetDidAppear;
- (void)layoutSubviews;
- (void)onConfirmed;
- (void)onCanceled;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)initializeComponents;
- (void).cxx_destruct;

@end
