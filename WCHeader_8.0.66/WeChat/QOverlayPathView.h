@class UIColor;

@interface QOverlayPathView : QOverlayView

@property (retain, nonatomic) UIColor *fillColor;
@property (retain, nonatomic) UIColor *strokeColor;
@property (nonatomic) double lineWidth;
@property (nonatomic) double alpha;

- (id)init;
- (BOOL)alphaShouldUpdateWhenLoaded;
- (void)onUpdateAlpha:(double)a0;
- (void)onDidAdd;
- (void).cxx_destruct;

@end
