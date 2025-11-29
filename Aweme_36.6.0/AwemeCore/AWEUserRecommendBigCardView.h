@class UIImageView, UICollectionView, UILabel, UITapGestureRecognizer, MASConstraint, NSMutableArray, UIButton, UIView, AWEUserRecommendBigCardModel, NSString, UIStackView, AWEBinding, AWEMultiAvatarView;
@protocol AWEUserWorkCellViewModelPoolProtocol, AWEUserInfoButtonsViewProtocol;

@interface AWEUserRecommendBigCardView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView<AWEUserInfoButtonsViewProtocol> *infoButtonsView;
@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) UILabel *recommendLabel;
@property (retain, nonatomic) UIView *spacerAboveCollectionView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionView *collectionViewToPreload;
@property (retain, nonatomic) UIImageView *verificationIcon;
@property (retain, nonatomic) MASConstraint *collectionViewRightConstraint;
@property (retain, nonatomic) UIStackView *recommendReasonStackView;
@property (retain, nonatomic) AWEMultiAvatarView *recommendUserAvatars;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) NSMutableArray *noAwemeConstraints;
@property (retain, nonatomic) NSMutableArray *hasAwemeConstraints;
@property (retain, nonatomic) AWEBinding *aliasBinding;
@property (retain, nonatomic) id<AWEUserWorkCellViewModelPoolProtocol> viewModelPool;
@property (retain, nonatomic) AWEUserRecommendBigCardModel *model;
@property (retain, nonatomic) AWEUserRecommendBigCardModel *modelToPreload;
@property (copy, nonatomic) id /* block */ userTapCardBlock;
@property (copy, nonatomic) id /* block */ tapAwemeCoverBlock;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (retain, nonatomic) UIButton *closeButton;
@property (nonatomic) BOOL isCardInsideScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSmallScreen;

- (double)containerViewWidth;
- (double)recommendReasonHeight;
- (double)cardViewWidth;
- (void)setupRecommendUserAvatars;
- (void)startCellsAnimation;
- (void)stopCellsAnimation;
- (double)largeAvatarWidth;
- (void)p_setCollectionViewHidden:(BOOL)a0;
- (double)p_recommendReasonAvatarWidth;
- (BOOL)optimizeCardAnimation;
- (id)p_cellForStory:(id)a0 collectionView:(id)a1 indexPath:(id)a2;
- (id)p_cellForAweme:(id)a0 collectionView:(id)a1 indexPath:(id)a2;
- (void)p_optimizeAnimationForImageView:(id)a0 collectionView:(id)a1;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;
- (void)closeButtonTapped:(id)a0;

@end
