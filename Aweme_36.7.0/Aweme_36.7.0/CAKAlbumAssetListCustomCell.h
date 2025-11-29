@class NSString, CAKAlbumListCustomCellConfig, ACCPassThroughView, UIView;

@interface CAKAlbumAssetListCustomCell : UICollectionViewCell <CAKAlbumAssetListCustomCellAccessibilityProtocol, ACCPassThroughAccessibilityDelegate, CAKAlbumAssetListCustomCellAccessibilityProtocol>

@property (retain, nonatomic) ACCPassThroughView *accessibilityClearView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CAKAlbumListCustomCellConfig *config;
@property (retain, nonatomic) UIView *customView;

+ (id)identifier;

- (id)accessibilityClearView;
- (void)setAccessibilityClearView:(id)a0;
- (void)configAccessibilityElements;
- (void)updateStatesWithAssets:(id)a0 isMultiSelection:(BOOL)a1 isAlwaysEnableAction:(BOOL)a2;
- (void)configWithSetting:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
