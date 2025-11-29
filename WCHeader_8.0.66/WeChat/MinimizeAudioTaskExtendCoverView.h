@class UIView, UIImage, MMWebImageView;

@interface MinimizeAudioTaskExtendCoverView : UIView

@property (nonatomic) unsigned int style;
@property (retain, nonatomic) MMWebImageView *coverView;
@property (retain, nonatomic) MMWebImageView *backgroundImageView;
@property (retain, nonatomic) UIView *backgroundGraintView;
@property (nonatomic) double customWidth;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) double fadeChangeTime;

+ (struct CGSize { double x0; double x1; })defaultSize;
+ (id)keyPathsForValuesAffectingImage;
+ (BOOL)automaticallyNotifiesObserversOfImage;

- (id)init;
- (id)initWithCoverWidth:(double)a0;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setImageURL:(id)a0;
- (void)setImage:(id)a0 bgStyle:(unsigned int)a1;
- (void)updateCurBgStyle:(unsigned int)a0 image:(id)a1 imageURL:(id)a2;
- (void)setDefaultImage:(id)a0;
- (void).cxx_destruct;

@end
