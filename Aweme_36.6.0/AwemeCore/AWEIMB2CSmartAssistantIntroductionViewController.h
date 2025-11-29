@class UIStackView, NSArray, UIImageView, UICollectionView, UILabel, NSDictionary, NSString;
@protocol AWEIMB2CSmartAssistantIntroductionViewControllerDelegate;

@interface AWEIMB2CSmartAssistantIntroductionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIStackView *subTitleStackView;
@property (retain, nonatomic) UIImageView *questionImageView;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *gotoImageView;
@property (retain, nonatomic) UICollectionView *introductionCollectionView;
@property (copy, nonatomic) NSDictionary *imSmartAssistantExplanationDict;
@property (copy, nonatomic) NSArray *cellViewModels;
@property (weak, nonatomic) id<AWEIMB2CSmartAssistantIntroductionViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__setupUI;
- (void)__setupLayout;
- (void)__createCellViewModels;
- (void)__handleSubTitleStackViewTapped;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;

@end
