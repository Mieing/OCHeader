@class UIColor, NLETimeSpaceNode_OC, NSString, DVETrackPanelContext;
@protocol DVEMultipleTrackViewCellModelDelegate;

@interface DVEMultipleTrackViewCellViewModel : NSObject

@property (retain, nonatomic) DVETrackPanelContext *context;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *movingBGColor;
@property (retain, nonatomic) NLETimeSpaceNode_OC *segment;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *icon;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) double timeScale;
@property (nonatomic) double cornerRadius;
@property (weak, nonatomic) id<DVEMultipleTrackViewCellModelDelegate> delegate;
@property (copy, nonatomic) NSString *accessibilityString;

- (id)currentSegments;
- (id)initWithContext:(id)a0 segment:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 backgroundColor:(id)a3 title:(id)a4 icon:(id)a5 timeScale:(double)a6;
- (void)updateSegmentId:(id)a0 state:(long long)a1;
- (void).cxx_destruct;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })targetTimeRange;

@end
