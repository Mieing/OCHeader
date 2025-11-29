@class CAGradientLayer, NSTimer, NSMutableArray, MMLiveFlowFeedCarouselCommentConfig;
@protocol MMLiveFlowFeedCarouselCommentViewDelegate;

@interface MMLiveFlowFeedCarouselCommentView : UIView

@property (retain, nonatomic) NSMutableArray *comments;
@property (retain, nonatomic) NSMutableArray *pendingComments;
@property (retain, nonatomic) NSMutableArray *commentLabels;
@property (retain, nonatomic) NSTimer *carouselTimer;
@property (retain, nonatomic) CAGradientLayer *maskLayer;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) struct CGSize { double width; double height; } lastLayoutSize;
@property (retain, nonatomic) MMLiveFlowFeedCarouselCommentConfig *config;
@property (weak, nonatomic) id<MMLiveFlowFeedCarouselCommentViewDelegate> delegate;

- (id)initWithConfig:(id)a0;
- (void)prepareForReuse;
- (double)rowHeight;
- (void)commonInit;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)setupMaskIfNeed;
- (void)updateMaskLayerLocations;
- (void)layoutLabels;
- (BOOL)addComments:(id)a0;
- (void)clearComments;
- (void)startCarousel;
- (void)stopCarousel;
- (void)invalidateTimer;
- (void)addNextPendingComment;
- (void)appendNewComment:(id)a0 animated:(BOOL)a1;
- (void)animateDisplayEnd;
- (void)updateCurrentIndexBeforeAlpha:(unsigned long long)a0;
- (void)onAppendFinish:(unsigned long long)a0;
- (void).cxx_destruct;

@end
