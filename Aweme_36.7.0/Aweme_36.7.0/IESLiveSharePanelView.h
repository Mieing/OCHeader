@class NSString, NSArray, UICollectionView, CAShapeLayer, UILabel, UICollectionViewFlowLayout, UIButton;

@interface IESLiveSharePanelView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (retain, nonatomic) UIButton *submitButton;
@property (nonatomic) BOOL shouldShowSubmitButton;
@property (copy, nonatomic) NSArray *items;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (copy, nonatomic) id /* block */ sumbitAction;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateDataSource:(id)a0;
- (void)onCloseAction:(id)a0;
- (void)onSubmitAction:(id)a0;
- (void)refreshSumbitButton:(BOOL)a0;
- (void)showSubmitButton;
- (void)hideSubmitButton;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (id)initWithItems:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)itemAtIndexPath:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)layoutSubviews;
- (void)setupUI;

@end
