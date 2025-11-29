@class UIView, DUXBaseImageView, NSString, DUXRadioBox, DUXSwitch, UICollectionView, AWEBackgroundPlaySettingsCellModel, UILabel;

@interface AWEBackgroundPlaySettingsCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) DUXBaseImageView *icon;
@property (retain, nonatomic) UIView *leftPoint;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) DUXSwitch *switchView;
@property (retain, nonatomic) DUXRadioBox *radioBox;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *rightView;
@property (retain, nonatomic) AWEBackgroundPlaySettingsCellModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)contentMaxWidth;
+ (id)contentFontForSubList;
+ (id)contentFont;
+ (BOOL)shouldDisplayContentForBigFont:(id)a0;
+ (double)cellHeight;

- (void)updateWithCellModel:(id)a0;
- (void)updateSelectedStatus:(BOOL)a0;
- (double)rightCollectionWidth;
- (void)updateCornerMask:(unsigned long long)a0;
- (void)themDidChanged;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)setupUI;

@end
