@class UIImageView, UIImage, UIView, AWEVoiceChangerItemCircleView;

@interface AWEVoiceChangerItemView : UIButton

@property (retain, nonatomic) UIView *coverView;
@property (retain, nonatomic) AWEVoiceChangerItemCircleView *circleView;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (retain, nonatomic) UIImageView *centerImageView;
@property (nonatomic) BOOL useLocalImage;
@property (retain, nonatomic) UIImage *localImage;
@property (nonatomic) struct CGSize { double width; double height; } localImageSize;

- (void)updateImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)setCenterImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)setThumbnailURLList:(id)a0 placeholder:(id)a1;
- (void)setThumbnailURLList:(id)a0;
- (void)setThumbnailURLList:(id)a0 placeholder:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
- (void)makeSubviewConstraints;
- (void)setIconImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setCoverBackgroundColor:(id)a0;

@end
