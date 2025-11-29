@class QMapContext, NSArray, QMediator, NSMutableArray;

@interface QInnerMarkerManager : NSObject

@property (weak, nonatomic) QMediator *mediator;
@property (weak, nonatomic) QMapContext *mapContext;
@property (retain, nonatomic) NSMutableArray *markerStorage;
@property (readonly, nonatomic) NSArray *markers;

- (id)init;
- (void)updateMarkerImage:(id)a0 fromPreviousImage:(id)a1;
- (void)updateMarkerZIndex:(id)a0;
- (void)updateMarkerIsHidden:(id)a0;
- (void)updateMarkerIsEnable:(id)a0;
- (void)updateMarkerCenterOffset:(id)a0;
- (void)updateMarkerCoordinate:(id)a0;
- (void)updateMarkerAlpha:(id)a0;
- (void)setDisplayLevel:(id)a0 level:(long long)a1;
- (void)addNativeMarker:(id)a0;
- (void)removeNativeMarker:(id)a0;
- (id)generateNativeMarkerPayload:(id)a0;
- (struct CGPoint { double x0; double x1; })getMarkerAnchor:(struct CGPoint { double x0; double x1; })a0 imageFrame:(struct CGSize { double x0; double x1; })a1;
- (id)handlerForNativeMarker:(id)a0;
- (id)getmarkerFromID:(int)a0;
- (id)processMarkerImage:(id)a0 fromPreviousImage:(id)a1;
- (void)updateMarkerStatus:(id)a0;
- (void).cxx_destruct;

@end
