@class MMUIImageView, NSString, MMWebImageView, UIImage, UIImageView, MMUIView, MMLiveTaskId, CAGradientLayer, UIColor;

@interface MMFinderLiveViewAnchorCoverImageView : MMUIView

@property (retain, nonatomic) MMWebImageView *liveRoomCoverImageViewForAnchor;
@property (retain, nonatomic) MMUIView *contentView;
@property (retain, nonatomic) MMUIImageView *midGradientView;
@property (retain, nonatomic) MMUIView *topMaskView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *coverImageURLString;
@property (nonatomic) double coverImageViewWidth;
@property (nonatomic) double coverImageViewHeight;
@property (nonatomic) double coverImageViewScaleRatio;
@property (nonatomic) double coverImageViewCenterPercent;
@property (retain, nonatomic) UIColor *mainColor;
@property (retain, nonatomic) UIImageView *recordLiveBackgroundImageView;
@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (nonatomic) double scale;

+ (void)addBottomCorner:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)createUI;
- (BOOL)isPortrait;
- (void)layoutUI;
- (id)playerBottomBarBackgroundColor:(id)a0;
- (void)refreshWitchScale:(double)a0 coverImageURLString:(id)a1;
- (void)updateGradientViewWithImage:(id)a0;
- (void)updateAnchorLiveRoomCoverImageURLString:(id)a0;
- (void)updateAnchorLiveRoomCoverImage:(id)a0;
- (void)inner_updateAnchorLiveRoomCoverImage:(id)a0;
- (void)updateAnchorRecordLiveBackgroundImageViewWithCoverImage:(id)a0;
- (void)createLiveRoomCoverImageViewForAnchor;
- (BOOL)isRecordLive;
- (BOOL)showRecordLiveBackgroundImageView;
- (id)finderLiveTask;
- (void).cxx_destruct;

@end
