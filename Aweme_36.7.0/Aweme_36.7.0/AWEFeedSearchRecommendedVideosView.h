@class AWEWordSourceModel, NSString, UICollectionView, NSDictionary, UILabel, UIView, UIButton;

@interface AWEFeedSearchRecommendedVideosView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UIGestureRecognizerDelegate, AWEFeedSearchRecommendedVideosViewProtocol>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEWordSourceModel *model;
@property (nonatomic) long long maxNumberOfRows;
@property (nonatomic) long long presentationMode;
@property (copy, nonatomic) id /* block */ didSelectRecommenedVideoBlock;
@property (copy, nonatomic) id /* block */ closeButtonDidTapBlock;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)maxNumberOfRowsWhenShownInView:(id)a0 presentationMode:(long long)a1;
+ (id)showInView:(id)a0 withModel:(id)a1 presentationMode:(long long)a2 animted:(BOOL)a3;
+ (long long)_maxNumberOfRowsForSize:(struct CGSize { double x0; double x1; })a0;
+ (double)_heightForHalfScreenMode;
+ (double)collectionViewToTitleLabelHalfScreenModeVerticalInterval;
+ (long long)enableStyleOpt;
+ (double)collectionViewCellItemSpacing;
+ (double)titleHeight;

- (double)closeBtnRightMargin;
- (double)closeBtnSizeWidth;
- (double)closeBtnSizeHeight;
- (id)closeImage;
- (void)closeButtonDidTap:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)titleColor;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (long long)titleFontWeight;
- (void)_updateWithModel:(id)a0;

@end
