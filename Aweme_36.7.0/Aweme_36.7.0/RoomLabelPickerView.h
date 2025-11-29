@class IESLiveAction, NSArray, NSString, UILabel, NSMutableArray, UIButton;

@interface RoomLabelPickerView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, IESLabelCollectionViewLayoutDataSource>

@property (retain, nonatomic) NSArray *labelGroupArray;
@property (retain, nonatomic) NSMutableArray *selectedLabelArray;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) IESLiveAction *backAction;
@property (retain, nonatomic) NSMutableArray *currentSelectedLabelArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)backButtonClick:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewLayout:(id)a0 sizeForItemAtIndexPath:(id)a1;
- (void)collectionViewLayout:(id)a0 validateContentSize:(struct CGSize { double x0; double x1; })a1;
- (id)createLabelSectionWithGroup:(id)a0 index:(long long)a1;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)setup;

@end
