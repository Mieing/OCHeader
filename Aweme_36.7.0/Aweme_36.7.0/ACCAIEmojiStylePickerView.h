@class UISelectionFeedbackGenerator, NSArray, UICollectionView, NSString, UICollectionViewFlowLayout, UIView, UILabel;
@protocol ACCAIEmojiStylePickerViewDelegate;

@interface ACCAIEmojiStylePickerView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewlayout;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *whiteCircle;
@property (retain, nonatomic) UILabel *nameLabel;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) BOOL disableUpdate;
@property (retain, nonatomic) UISelectionFeedbackGenerator *feedbackGenerator;
@property (copy, nonatomic) NSArray *dataList;
@property (weak, nonatomic) id<ACCAIEmojiStylePickerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_makeConstraint;
- (void)p_updateSelection;
- (BOOL)p_shouldUseSmallLayout;
- (void)p_createComponent;
- (void)p_notifyDidSelectedStyle:(id)a0;
- (id)indexPathWithContentOffset:(struct CGPoint { double x0; double x1; })a0 maxCount:(unsigned long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataList:(id)a1;
- (void)selectDefaultStyle:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;

@end
