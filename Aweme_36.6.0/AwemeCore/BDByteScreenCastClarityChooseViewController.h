@class UIView, BDSCClarityLimitConfig, NSArray, NSString, BDByteScreenCastAppUIConfigInfo, UIButton, UICollectionView, UILabel;
@protocol BDByteScreenCastClarityChooseViewDelegate;

@interface BDByteScreenCastClarityChooseViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, BDByteScreenCastClarityChooseView>

@property (retain, nonatomic) UIView *panelView;
@property (retain, nonatomic) UIButton *maskButton;
@property (retain, nonatomic) UILabel *titleLable;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *collectionContainerView;
@property (retain, nonatomic) UIView *sepLine;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (copy, nonatomic) NSArray *clarityList;
@property (copy, nonatomic) NSString *currentClarity;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) double panelViewHeight;
@property (retain, nonatomic) BDSCClarityLimitConfig *clarityLimitConfig;
@property (weak, nonatomic) id<BDByteScreenCastClarityChooseViewDelegate> delegate;
@property (copy, nonatomic) NSArray *limitedClarity;
@property (retain, nonatomic) BDByteScreenCastAppUIConfigInfo *appUIInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindActions;
- (void)dismissSelfWithCompletion:(id /* block */)a0;
- (void)buildSubviews;
- (void)updateCurrentClarity:(id)a0;
- (void)updateClarityWithList:(id)a0;
- (void)updateConstaints;
- (void)onCancelBtnClick:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidLoad;
- (void)showInViewController:(id)a0;

@end
