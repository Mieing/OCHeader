@class UIImageView, UIImage, UILabel, HTSLiveAmazingBackgroundView;

@interface IESLiveMatchSpliceShareInfoView : UIView

@property (retain, nonatomic) UIImageView *matchInfoImageView;
@property (retain, nonatomic) HTSLiveAmazingBackgroundView *bottomMaskView;
@property (retain, nonatomic) UILabel *longPicTips;
@property (retain, nonatomic) UIImage *targetImage;
@property (nonatomic) long long margin;

- (id)initWithTargetImage:(id)a0;
- (id)compressImage:(id)a0 withTargetSize:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupSubviews;

@end
