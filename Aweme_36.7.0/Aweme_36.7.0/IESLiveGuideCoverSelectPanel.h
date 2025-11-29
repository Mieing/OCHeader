@class NSString, UIImageView, UICollectionView, UIView, UILabel, UIButton;
@protocol IESLiveGuideCoverSelectPanelDataSource;

@interface IESLiveGuideCoverSelectPanel : UIView <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) UIView *topContainer;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIView *middleContainer;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *threeToFourLabel;
@property (retain, nonatomic) UIView *oneToOneView;
@property (retain, nonatomic) UILabel *oneToOneLabel;
@property (retain, nonatomic) UIView *tipContainer;
@property (retain, nonatomic) UIImageView *tipImageIcon;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIView *bottomContainer;
@property (retain, nonatomic) UIView *leftBottomContainer;
@property (retain, nonatomic) UILabel *leftTitleLabel;
@property (retain, nonatomic) UILabel *leftTipLabel;
@property (retain, nonatomic) UICollectionView *imageCollectionView;
@property (retain, nonatomic) UIView *rightBottomContainer;
@property (retain, nonatomic) UILabel *rightTitleLabel;
@property (retain, nonatomic) UIImageView *rightImageView;
@property (nonatomic) long long currentSelectedAiImageIndex;
@property (nonatomic) unsigned long long currentImageType;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (weak, nonatomic) id<IESLiveGuideCoverSelectPanelDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)confirmButtonTapped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 closeBlock:(id /* block */)a1 confirmBlock:(id /* block */)a2;
- (void)layoutTopContainer;
- (void)layoutBottomContainer;
- (void)layoutMiddleContainer;
- (void)rightImageTapped;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)closeButtonTapped;

@end
