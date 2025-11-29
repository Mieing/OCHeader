@class UIImageView, BDImageView;
@protocol IESLiveWebPPlayer;

@interface IESLiveAudioBackgroundAnimatedView : UIView

@property (nonatomic) BOOL cacheAllFrame;
@property (nonatomic) double ratio;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *backgroundAnimatedView;
@property (retain, nonatomic) BDImageView *imageView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRect;

- (id)initWithCacheAllFrame:(BOOL)a0 ratio:(double)a1;
- (void)setImageData:(id)a0 visibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setImageUrls:(id)a0 visibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)stopAnimating;
- (void)startAnimating;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (void)layoutSubviews;

@end
