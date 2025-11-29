@class UIImageView, UIImage, UILabel, UIView;

@interface BDSCLandscapeDeviceCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *deviceName;
@property (retain, nonatomic) UIImageView *selectedMarkView;
@property (retain, nonatomic) UIImageView *tvImageView;
@property (retain, nonatomic) UIImage *normalTvImage;
@property (retain, nonatomic) UIImage *selectedTvImage;
@property (retain, nonatomic) UIView *bottomLineView;
@property (nonatomic) BOOL available;

- (void)setMaskLayerCorner:(unsigned long long)a0;
- (void)removeMaskLayerCorner;
- (void)updateDeviceName:(id)a0;
- (void)setHasAvailableDevice:(BOOL)a0;
- (void)setDeviceSelected:(BOOL)a0;
- (void)setDeviceSelected:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
