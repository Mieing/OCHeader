@class HTSLiveVSCameraInfo, LOTAnimationView, UIImageView, UIView, IESLiveImageView, UILabel;

@interface IESLiveMultiCameraListViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *selectedBgMaskView;
@property (retain, nonatomic) UIView *coverBackgroundView;
@property (retain, nonatomic) UIView *coverSelectedMaskView;
@property (retain, nonatomic) LOTAnimationView *livingIcon;
@property (retain, nonatomic) UIImageView *vrIcon;
@property (retain, nonatomic) IESLiveImageView *coverImageView;
@property (retain, nonatomic) UILabel *cameraInfoLabel;
@property (retain, nonatomic) HTSLiveVSCameraInfo *cameraInfo;
@property (nonatomic) long long cellType;

+ (id)cellIdentifier;

- (void)updateCameraInfo:(id)a0 selected:(BOOL)a1 cellType:(long long)a2;
- (void)updateSubviewsFrame;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)createUI;

@end
