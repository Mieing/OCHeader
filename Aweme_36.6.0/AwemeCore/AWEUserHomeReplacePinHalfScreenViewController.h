@class AWEAwemeModel, AWEUserWorkCellViewModelPool, NSArray, DUXContentSheet, NSString, NSDictionary, UICollectionView, DUXButton, UILabel, DUXRadioboxGroup;

@interface AWEUserHomeReplacePinHalfScreenViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, DUXSheetDelegate>

@property (weak, nonatomic) DUXContentSheet *sheet;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) DUXButton *replaceButton;
@property (retain, nonatomic) DUXRadioboxGroup *radioGroup;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEAwemeModel *toPinAweme;
@property (copy, nonatomic) NSArray *pinAwemeList;
@property (copy, nonatomic) NSDictionary *extraParam;
@property (retain, nonatomic) AWEUserWorkCellViewModelPool *viewModelPool;
@property (nonatomic) long long currentSelectedIndex;
@property (nonatomic) unsigned long long result;
@property (nonatomic) BOOL isReplaceOnAir;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)panelHeight;
- (void)sheetDidDismiss:(id)a0;
- (void)trackPanelShow;
- (void)updateSelectedIndex:(long long)a0;
- (id)initWithPinAwemeList:(id)a0 toPinAweme:(id)a1 extraParam:(id)a2;
- (BOOL)isMultiRowStyle;
- (void)trackReplaceButtonClick;
- (double)otherAreaHeight;
- (void)replaceButtonDidClick:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)viewDidLayoutSubviews;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)show;
- (void)setupUI;
- (double)collectionViewHeight;

@end
