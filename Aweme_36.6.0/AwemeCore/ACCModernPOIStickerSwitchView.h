@class NSString, NSMutableDictionary, ACCModernPOIStickerView, AWEInteractionModernPOIStickerInfoModel, UIView, UILabel, UICollectionView;
@protocol ACCModernPOIStickerSwitchViewDelegate;

@interface ACCModernPOIStickerSwitchView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (weak, nonatomic) ACCModernPOIStickerView *stickerView;
@property (retain, nonatomic) AWEInteractionModernPOIStickerInfoModel *poiStyleInfo;
@property (retain, nonatomic) NSMutableDictionary *downloadingDict;
@property (retain, nonatomic) UIView *gesView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *locationLabel;
@property (retain, nonatomic) UICollectionView *styleIconsView;
@property (weak, nonatomic) id<ACCModernPOIStickerSwitchViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clickToDismiss;
- (void)showSelectViewForSticker:(id)a0;
- (void)dismissSelectView:(id /* block */)a0;
- (void)clickToSwitchPOI;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)reloadIcons;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
