@class NSString, NSArray, UICollectionViewFlowLayout, UIImageView, AWEGradientView, UIButton, UICollectionView, UILabel;

@interface AWEVideoCoverEvaluateAiDetailCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *detailCollectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *detailCollectionViewLayout;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UIButton *expandedButton;
@property (retain, nonatomic) UILabel *expandedLabel;
@property (retain, nonatomic) UIImageView *expandedIcon;
@property (retain, nonatomic) NSArray *problemList;
@property (copy, nonatomic) id /* block */ expandedBlock;
@property (copy, nonatomic) id /* block */ expandedItemBlock;
@property (nonatomic) BOOL isExpanded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForEvaluateAiDetailModels:(id)a0 isProblemExpanded:(BOOL)a1 isShowInEdit:(BOOL)a2;

- (void)initSubViews;
- (void)updateEvaluateAiDetailModels:(id)a0 hasExpandedButton:(BOOL)a1;
- (void)expandedButtonClick;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
