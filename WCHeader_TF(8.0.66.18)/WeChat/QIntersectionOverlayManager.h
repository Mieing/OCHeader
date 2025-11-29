@class NSMutableArray, QMapContext;

@interface QIntersectionOverlayManager : NSObject

@property (retain, nonatomic) NSMutableArray *container;
@property (weak, nonatomic) QMapContext *context;

- (void)addInterSectionOverlay:(id)a0;
- (void)removeInterSectionOverlay:(id)a0;
- (void)setIntersectionOverlayVisible:(BOOL)a0 overlayID:(int)a1;
- (id)payloadForOverlay:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
