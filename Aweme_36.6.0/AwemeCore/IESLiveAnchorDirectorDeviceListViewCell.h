@class UIImageView, UILabel, UIView;

@interface IESLiveAnchorDirectorDeviceListViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *deviceContentView;
@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) UIImageView *backCameraImageView;
@property (retain, nonatomic) UILabel *backTipsLabel;
@property (retain, nonatomic) UIView *cameraPreView;
@property (retain, nonatomic) UILabel *cameraTitleLabel;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UIView *dotStatusView;
@property (retain, nonatomic) UILabel *statusLabel;

- (void)updateSelectedStatus:(BOOL)a0;
- (void)updateWithItem:(id)a0 isCurrentCameraView:(BOOL)a1;
- (void)updateCameraView:(id)a0 isCurrentCamera:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
