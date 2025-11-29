@class QOverlayContainer;
@protocol QOverlay;

@interface QOverlayView : NSObject

@property (weak, nonatomic) QOverlayContainer *container;
@property (retain, nonatomic) id<QOverlay> overlay;
@property (nonatomic) int strokeId;
@property (nonatomic) int fillId;
@property (nonatomic) int minZoomLevel;
@property (nonatomic) int maxZoomLevel;
@property (nonatomic) long long internalDisplayLevel;
@property (nonatomic) long long displayLevel;
@property (nonatomic) int zIndex;

- (id)init;
- (void)prepareForUse;
- (void)onDidAdd;
- (void)onWillRemove;
- (void)setMinZoomLevel:(int)a0 maxZoomLevel:(int)a1;
- (void)updateOverlayPoints:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 pointCount:(int)a1;
- (int)clampZoomLevel:(int)a0;
- (void).cxx_destruct;

@end
