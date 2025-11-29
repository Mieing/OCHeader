@class NSString, NSArray, UIImageView, UICollectionView, UIView, UILabel, UIButton;
@protocol AWESearchAIGCImageConfirmViewControllerDelegate;

@interface AWESearchAIGCImageConfirmViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *pickedImageView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UILabel *cancelLabel;
@property (copy, nonatomic) NSArray *queryList;
@property (nonatomic) BOOL shouldShowKeywords;
@property (copy, nonatomic) id /* block */ dismissCompletion;
@property (weak, nonatomic) id<AWESearchAIGCImageConfirmViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelButtonClick;
- (void)confirmButtonClick;
- (void)setContentModeBasedOnImageAspectRatio:(id)a0;
- (id)initWithImage:(id)a0 keywordsDisplay:(BOOL)a1;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)setupUI;

@end
