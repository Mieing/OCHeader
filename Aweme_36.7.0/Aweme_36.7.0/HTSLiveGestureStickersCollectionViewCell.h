@class NSArray, UIImageView, UIActivityIndicatorView, UIView;

@interface HTSLiveGestureStickersCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *effectImageView;
@property (retain, nonatomic) UIActivityIndicatorView *indicator;
@property (retain, nonatomic) UIView *redDot;
@property (copy, nonatomic) NSArray *imageURLs;
@property (nonatomic) BOOL applied;
@property (nonatomic) BOOL needToShowRedDot;

- (void)setUI;
- (void)startDownloading;
- (void)endDownloading;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
