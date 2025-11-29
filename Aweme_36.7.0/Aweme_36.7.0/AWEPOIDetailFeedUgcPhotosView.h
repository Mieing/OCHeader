@class NSDictionary, UIImageView, UIImage, UIView, UILabel, AWEPOIDetailFeedUgcPhotosConfig;

@interface AWEPOIDetailFeedUgcPhotosView : UIView <AWEZoomTransitionOuterContextProvider>

@property (retain, nonatomic) AWEPOIDetailFeedUgcPhotosConfig *config;
@property (retain, nonatomic) UIImageView *singlePhotoView;
@property (retain, nonatomic) UIView *countTipView;
@property (retain, nonatomic) UILabel *countLabel;
@property (nonatomic) long long currentViewTag;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (nonatomic) BOOL firstZoomTransition;
@property (nonatomic) long long lastShowCount;
@property (copy, nonatomic) id /* block */ didTap;
@property (readonly, nonatomic) NSDictionary *zoomTransitionContext;

+ (id)photosInInfoRefactorConfig:(BOOL)a0 containerWidth:(double)a1;
+ (id)photosConfig;
+ (id)photosConfigWithContainerWidth:(double)a0;
+ (double)twoPhotosWidthWithConfig:(id)a0;
+ (struct CGSize { double x0; double x1; })photoSizeWithConfig:(id)a0;
+ (struct CGSize { double x0; double x1; })singlePhotoSizeWithConfig:(id)a0;
+ (id)photosInCommentConfigWithContainerWidth:(double)a0;
+ (id)photosInCommentOptConfigWithContainerWidth:(double)a0;
+ (struct CGSize { double x0; double x1; })sizeWithImages:(id)a0 config:(id)a1;
+ (id)photosInInfoRefactorConfig:(BOOL)a0;
+ (id)photosInCommentConfig;
+ (id)photosInCommentOptConfig;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (BOOL)zoomTransitionWantsTabBarAnimation;
- (BOOL)zoomTransitionWantsFromVCScale;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusViewPlaceholderFrame;
- (void)updateWithConfig:(id)a0 images:(id)a1 maxPhotoCount:(long long)a2;
- (void)updateImagePlaceholderColor:(id)a0;
- (void)transitionWithViewController:(id)a0;
- (id)createPhotoView;
- (void)setupPhotosViewWithCount:(long long)a0;
- (void)updateUIWithMaxPhotoCount:(long long)a0;
- (void)photoTapAction:(id)a0;
- (id)currentPhotoViewWithIndex:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })placeholderFrame;
- (void)updateWithImages:(id)a0 maxPhotoCount:(long long)a1;
- (void)updateMaxPhotoCount:(long long)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)setupUI;

@end
