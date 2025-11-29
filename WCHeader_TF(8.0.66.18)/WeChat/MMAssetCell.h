@class UIButton, NSMutableArray, NSDate;
@protocol MMAssetCellDelegate;

@interface MMAssetCell : UITableViewCell

@property (nonatomic) BOOL showAddButton;
@property (retain, nonatomic) UIButton *addButton;
@property (nonatomic) BOOL showCameraButton;
@property (retain, nonatomic) UIButton *cameraButton;
@property (weak, nonatomic) id<MMAssetCellDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *rowAssets;
@property (readonly, nonatomic) NSDate *assetDate;
@property (nonatomic) BOOL bPickerStyleForFile;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)doFadeInAnimationWithOrder:(long long)a0;
- (void)setShowAddButton:(BOOL)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)checkInitAddButton;
- (void)onAddButtonClick:(id)a0;
- (void)setShowCameraButton:(BOOL)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)checkInitCameraButton;
- (void)onCameraButtonClick:(id)a0;
- (void)enableCameraButton:(BOOL)a0;
- (BOOL)isCameraButtonEnable;
- (id)lastVisibleAssetView;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
