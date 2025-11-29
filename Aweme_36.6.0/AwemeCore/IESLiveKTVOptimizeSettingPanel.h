@class IESLiveKTVOptimizeSettingPanelModel, UICollectionViewFlowLayout, UICollectionView, NSString, IESLiveKTVBarButton, UILabel, UIView;

@interface IESLiveKTVOptimizeSettingPanel : UIView <UICollectionViewDelegate, UICollectionViewDataSource, IESLiveKTVOptimizeSettingPanelModelDelegate>

@property (retain, nonatomic) IESLiveKTVOptimizeSettingPanelModel *model;
@property (retain, nonatomic) IESLiveKTVBarButton *dissMissButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *navigationLine;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (copy, nonatomic) id /* block */ dissMissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 model:(id)a1;
- (void)settingDidChanged;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)setupUI;

@end
