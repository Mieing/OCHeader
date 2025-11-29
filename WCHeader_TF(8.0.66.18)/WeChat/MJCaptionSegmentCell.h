@class MJCaptionLabel, MJSegmentViewModel;

@interface MJCaptionSegmentCell : MJAudioSegmentCell

@property (retain, nonatomic) MJSegmentViewModel *segmentVM;
@property (retain, nonatomic) MJCaptionLabel *captionLabel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } currentBounds;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)captionSegment;
- (id)captionLabelWithText:(id)a0 subText:(id)a1;
- (void)setupCaptionLabels;
- (void)showCaptionLabelsAnimated:(BOOL)a0;
- (void)hideCaptionLabelsAnimated:(BOOL)a0;
- (void)layoutCaptionLabel:(id)a0 withTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (void)layoutCaptionLabels;
- (void)prepareForReuse;
- (void)setupWithSegmentViewModel:(id)a0;
- (void)syncWithMutation;
- (BOOL)checkViewModel;
- (void).cxx_destruct;

@end
