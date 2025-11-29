@class AWESearchBackgroundView, CAShapeLayer, AWEGeneralSearchBackgroundModel;

@interface AWEGeneralSearchBackgroundManager : NSObject

@property (retain, nonatomic) AWESearchBackgroundView *backgroundView;
@property (retain, nonatomic) AWESearchBackgroundView *resultHeaderBackgroundView;
@property (retain, nonatomic) AWESearchBackgroundView *qualityGradientView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } resultBackgroundFrame;
@property (nonatomic) unsigned long long generalSearchTitleTheme;
@property (nonatomic) BOOL generalSearchTitleHidden;
@property (retain, nonatomic) AWEGeneralSearchBackgroundModel *backgroundModel;
@property (retain, nonatomic) CAShapeLayer *bottomAngleLayer;
@property (nonatomic) struct CGPoint { double x; double y; } contentOffset;
@property (nonatomic) double initialContentOffsetY;
@property (nonatomic) BOOL usePureBackground;
@property (copy, nonatomic) id /* block */ generalSearchTitleBGShowBlock;
@property (copy, nonatomic) id /* block */ generalSearchTitleBGChangeBlock;
@property (nonatomic) double bottomLeftCorner;
@property (nonatomic) double bottomRightCorner;
@property (nonatomic) BOOL isForVerticalController;
@property (nonatomic) BOOL isForVerticalNewCommon;
@property (nonatomic) BOOL needDefaultCoverGradientView;

+ (BOOL)fixBackgroundColorBottomBar;
+ (BOOL)fixBackgroundColorReSearchGeneralSearchTitleHidden;
+ (BOOL)fixFreshBackgroundColorTitleHidden;

- (void)updateGeneralSearchTitleTheme;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })searchBackgroundFrameOffset;
- (void)updateBottomAngleLayer;
- (id)generalResultBackgroundView;
- (id)generalResultHeaderBackgroundView;
- (void)updateResultBackgroundFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)hostContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)doubleColumnExperienceOptimize;
- (id)searchBackgroundModel;
- (void)updateBottomCorner:(double)a0 bottomRightCorner:(double)a1;
- (BOOL)enableUserbackMaskBackgroundColor;
- (id)createQualityGradientViewModel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })QualityGradientViewFrameOffset;
- (void)hostContentOffset:(struct CGPoint { double x0; double x1; })a0 offsetExtra:(double)a1;
- (id)qualityGradientBackgroundView;
- (void)updateOriginContentOffset:(double)a0;
- (void)updateDownArcBottomCorner:(double)a0;
- (void)resetSearchTitleHidden:(BOOL)a0;
- (void)resetQualityStyleBackground;
- (void).cxx_destruct;
- (void)updateWithModel:(id)a0;
- (void)resetContentOffset:(struct CGPoint { double x0; double x1; })a0;

@end
