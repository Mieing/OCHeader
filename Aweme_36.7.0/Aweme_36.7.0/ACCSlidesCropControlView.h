@class ACCSlidesCropInfo, NSArray, UICollectionView, NSString, UILabel, UIButton;
@protocol ACCSliesCropControlDelegate;

@interface ACCSlidesCropControlView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UICollectionView *ratioCollectionView;
@property (retain, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) ACCSlidesCropInfo *cropInfo;
@property (nonatomic) long long selectedIndex;
@property (weak, nonatomic) id<ACCSliesCropControlDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupView;
- (void)p_setupLayout;
- (BOOL)croppingImageIsDragging;
- (id)p_modelFromDictionay:(id)a0;
- (void)handleCloseAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)handleConfirmAction:(id)a0;

@end
