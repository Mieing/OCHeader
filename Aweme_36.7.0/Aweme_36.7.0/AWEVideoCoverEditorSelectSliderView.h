@class AWEVideoCoverEditorSelectPreviewThumbnailView, NSArray, AWEImagesView, NSMutableDictionary, UIImpactFeedbackGenerator, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol AWEVideoCoverEditorSelectSliderViewDelegate;

@interface AWEVideoCoverEditorSelectSliderView : UIView

@property (nonatomic) double imageWidth;
@property (nonatomic) double imageHeight;
@property (retain, nonatomic) AWEImagesView *coverImagesView;
@property (retain, nonatomic) NSArray *images;
@property (retain, nonatomic) AWEVideoCoverEditorSelectPreviewThumbnailView *controlView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic) double positionPercent;
@property (retain, nonatomic) NSArray *recommendInfoList;
@property (retain, nonatomic) NSArray *recommendViews;
@property (nonatomic) BOOL isSelectRecommend;
@property (nonatomic) unsigned long long currentSelectRecommendIndex;
@property (retain, nonatomic) NSMutableDictionary *trackInfo;
@property (retain, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator;
@property (weak, nonatomic) id<AWEVideoCoverEditorSelectSliderViewDelegate> delegate;

- (id)trackParams;
- (void)setupGesture;
- (void)setupRecommendUI;
- (void)refreshWithImageArray:(id)a0 aspectRatio:(double)a1 mode:(unsigned long long)a2;
- (void)updateRecommendUI;
- (void)selectRecommendIndex:(unsigned long long)a0;
- (void)setCurrentSelectedViewHidden:(BOOL)a0;
- (void)deselectCurrentRecommendIndex;
- (void)refreshWithRecommendInfoList:(id)a0;
- (id)initWithImageWidth:(double)a0 imageHeight:(double)a1;
- (double)xValueWithPercent:(double)a0;
- (void)setPreviewThumbnailView:(id)a0 highLight:(BOOL)a1;
- (void)selectRecommendIndex:(unsigned long long)a0 triggerDelegate:(BOOL)a1;
- (void)handleTapLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)handleClickRecommendView:(id)a0;
- (void)moveToHandlePoint:(struct CGPoint { double x0; double x1; })a0;
- (id)createRecommendViews;
- (void)makeSureRecommendViewsNoIntersection;
- (void)updateTrackInfoWithOriginRecommendViews:(id)a0 processedRecommendViews:(id)a1;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void)layoutSubviews;
- (double)currentProgress;
- (void)handlePanGesture:(id)a0;
- (void)updateProgress:(double)a0;
- (void)handleTapGesture:(id)a0;

@end
