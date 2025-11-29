@class MMLiveRewardGiftCustomizationTipChevronView, UICollectionView, NSString, MMFinderLiveGiftCustomizationModel, UIView, UIButton;
@protocol MMLiveRewardGiftCustomizationTipViewDelegate;

@interface MMLiveRewardGiftCustomizationTipView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) MMFinderLiveGiftCustomizationModel *model;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) MMLiveRewardGiftCustomizationTipChevronView *chevronView;
@property (retain, nonatomic) UIView *compactContainerView;
@property (retain, nonatomic) UIButton *expandButton;
@property (retain, nonatomic) UIView *expandedContainerView;
@property (retain, nonatomic) UIView *colorsCollectionViewContainerView;
@property (retain, nonatomic) UICollectionView *colorsCollectionView;
@property (retain, nonatomic) UIView *separatorBar;
@property (retain, nonatomic) UIButton *textCustomizationButton;
@property (nonatomic) BOOL expanded;
@property (nonatomic) double chevronX;
@property (weak, nonatomic) id<MMLiveRewardGiftCustomizationTipViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithModel:(id)a0;
- (void)reloadContent;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)onExpandButtonTapped;
- (void)onTextCustomizationButtonTapped;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)initializeComponents;
- (void)configureViewsForExpansion:(BOOL)a0;
- (void)configureViewsForStyle:(id)a0;
- (void).cxx_destruct;

@end
