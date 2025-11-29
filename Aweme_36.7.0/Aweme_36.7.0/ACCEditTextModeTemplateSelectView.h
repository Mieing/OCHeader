@class UIView, NSString, NSArray, ACCEditTextModeTemplateDataHelper, ACCEditTextModeTemplateModel, UICollectionView, ACCEditTextModeTemplateSwapIndicatorView, UILabel;
@protocol ACCEditTextModeTemplateSelectViewDelegate;

@interface ACCEditTextModeTemplateSelectView : UIControl <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate, ACCEditTextModeTemplateDataHelperSubscriber>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *indictorView;
@property (retain, nonatomic) UILabel *templateNameLabel;
@property (retain, nonatomic) UIView *splitLine;
@property (retain, nonatomic) ACCEditTextModeTemplateSwapIndicatorView *swapIndicatorView;
@property (copy, nonatomic) NSArray *dataList;
@property (retain, nonatomic) ACCEditTextModeTemplateDataHelper *dataHelper;
@property (retain, nonatomic) NSString *selectedTemplateId;
@property (retain, nonatomic) ACCEditTextModeTemplateModel *selectedModel;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) BOOL dragging;
@property (weak, nonatomic) id<ACCEditTextModeTemplateSelectViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)selectViewHeight;
+ (double)initialInset;
+ (long long)indexNearOffset:(double)a0;
+ (double)offsetAtIndex:(long long)a0;

- (void)didSelectIndex:(long long)a0;
- (void)fetchTemplateListDidComplete:(id)a0 error:(id)a1;
- (id)initWithSelectedTemplateId:(id)a0 dataHelper:(id)a1;
- (void)landingToTemplateWithoutCallback:(id)a0;
- (void)prefetchTemplateList:(id)a0;
- (void)didSelectIndex:(long long)a0 callBack:(BOOL)a1;
- (void)impactFeedback;
- (void)updateTopText:(id)a0;
- (double)switchFrequencyTime;
- (void)addSplitLineIfNeeded:(id)a0;
- (BOOL)switchBoundsReturn;
- (double)switchBoundsReturnOffset;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)setupUI;
- (void)scrollToIndex:(long long)a0 animated:(BOOL)a1;

@end
