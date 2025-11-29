@class UIPageControl, NSArray, UICollectionView, NSString, UILabel, AWEGradientView;

@interface AWEEComWidgetGuideContentPage : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UILabel *nextStepBtn;
@property (retain, nonatomic) UILabel *notAddBtn;
@property (retain, nonatomic) UILabel *goHomeBtn;
@property (retain, nonatomic) UIPageControl *indicators;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEGradientView *goHomeBtnContainer;
@property (nonatomic) unsigned long long currIndex;
@property (copy, nonatomic) NSArray *nodeList;
@property (copy, nonatomic) id /* block */ notAddBlock;
@property (copy, nonatomic) id /* block */ goHomeBlock;
@property (copy, nonatomic) id /* block */ nextStepBtnClickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)nextStepBtnClicked;
- (id)createBtnWithText:(id)a0 textColor:(id)a1 bgdColor:(id)a2 cornerRadius:(double)a3 selector:(SEL)a4;
- (void)notAddBtnClicked;
- (void)goHomeBtnClicked;
- (void)refreshWithNodeList:(id)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)setupView;
- (void)refreshButton;

@end
