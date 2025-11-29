@class AWERecordInspirationDetail, NSString, UIImageView, UICollectionView, UILabel, UIView, AWECodeGenActivityCardModel;
@protocol AWERecordInspirationActivityCardCellDelegate;

@interface AWERecordInspirationActivityCardCell : UICollectionViewCell <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *moreFooterView;
@property (retain, nonatomic) UILabel *footerLabel;
@property (retain, nonatomic) UIImageView *footerImage;
@property (retain, nonatomic) UIImageView *titleIcon;
@property (retain, nonatomic) UICollectionView *talentTasksCollectionView;
@property (retain, nonatomic) AWECodeGenActivityCardModel *activityCardModel;
@property (retain, nonatomic) AWERecordInspirationDetail *inspirationModel;
@property (weak, nonatomic) id<AWERecordInspirationActivityCardCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onThemeChanged;
- (void)trackCardShow;
- (void)bindNotification;
- (void)updateTitleLabelColor:(id)a0;
- (void)trackTalentTaskCard:(id)a0 rank:(long long)a1 trackType:(long long)a2;
- (void)updateTitleAndTitleIconUI;
- (void)setupTitleIcon:(id)a0;
- (void)footerMoreDidSelectTask;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
