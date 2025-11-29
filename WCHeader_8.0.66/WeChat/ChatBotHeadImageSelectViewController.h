@class NSMutableArray, NSString, UICollectionView, UICollectionViewFlowLayout, MMUIButton, MMUILabel;

@interface ChatBotHeadImageSelectViewController : MMUIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) MMUIButton *backBtn;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (retain, nonatomic) NSMutableArray *imageUrlArray;
@property (copy, nonatomic) id /* block */ selectCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSelectCompletionBlock:(id /* block */)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)initImage;
- (void)initLayout;
- (void)setupLayout;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)close;
- (void).cxx_destruct;

@end
