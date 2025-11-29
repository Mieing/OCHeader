@class AWESearchScanCameraPopEntranceImageModel, UIVisualEffectView, UIImageView, UIView, UILabel, BDImageView;
@protocol AWESearchScanCameraPopEntranceImageViewDelegate;

@interface AWESearchScanCameraPopEntranceImageView : UIView

@property (retain, nonatomic) BDImageView *image;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UIView *imageTitleZone;
@property (retain, nonatomic) UILabel *imageTitle;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) AWESearchScanCameraPopEntranceImageModel *model;
@property (weak, nonatomic) id<AWESearchScanCameraPopEntranceImageViewDelegate> delegate;

- (void)configUI;
- (void)pushSearchScanResult:(id)a0 trackParams:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithModel:(id)a0;
- (void)tapGestureHandler:(id)a0;

@end
