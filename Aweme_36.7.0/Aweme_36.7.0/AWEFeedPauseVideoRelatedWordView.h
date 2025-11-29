@class UIView, NSString, NSArray, AWEGradientView, UIImageView, NSMutableArray, UICollectionView, CAGradientLayer, NSNumber;

@interface AWEFeedPauseVideoRelatedWordView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSArray *recommendList;
@property (nonatomic) BOOL useDefaultText;
@property (retain, nonatomic) NSNumber *itemCountFirstScreen;
@property (nonatomic) BOOL hasInterruptWord;
@property (nonatomic) double interruptWordWidth;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) NSMutableArray *separatedWordView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) CAGradientLayer *maskLayer;
@property (copy, nonatomic) id /* block */ didTapRelatedWordBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)abConfig;
+ (double)separatedWidthWithRecommendWords:(id)a0;
+ (unsigned long long)realShowWordStyle:(unsigned long long)a0 itemCount:(long long)a1;

- (void)updateRecommendWords:(id)a0;
- (void)updateDefaultTitleMiddle;
- (void)hiddenGradientView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 wordsStyle:(unsigned long long)a1;
- (void)setBackgroundViewClear;
- (BOOL)isBottomTitleStyle;
- (void)setupCombineViewIfNeeded;
- (void)showDefaultView;
- (void)addCombineWordView:(id)a0 hiddenTitle:(BOOL)a1;
- (BOOL)enableCollectionViewScroll;
- (void)didTapRelatedWork;
- (id)createTitleLabel:(id)a0;
- (long long)itemCountWhenNotScroll;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)setupUI;

@end
