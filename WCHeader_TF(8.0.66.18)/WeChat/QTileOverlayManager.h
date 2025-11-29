@class QMapContext, NSArray, NSString, QMediator, TBTileOverlayRenderContainer;
@protocol QTileOverlayManagerDelegate;

@interface QTileOverlayManager : NSObject <QMapContextDelegate>

@property (retain, nonatomic) TBTileOverlayRenderContainer *tileOverlayRenders;
@property (weak, nonatomic) QMapContext *mapContext;
@property (weak, nonatomic) id<QTileOverlayManagerDelegate> delegate;
@property (weak, nonatomic) QMediator *mediator;
@property (readonly, nonatomic) NSArray *tileOverlays;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)mapContext:(id)a0 downloadTile:(id)a1;
- (void)mapContext:(id)a0 cancelDownloadTile:(id)a1;
- (struct { long long x0; long long x1; long long x2; long long x3; double x4; })pathForInternal:(id)a0;
- (BOOL)containsTileOverlay:(id)a0;
- (void)refresh;
- (id)addTileOverlay:(id)a0;
- (void)removeTileOverlay:(id)a0;
- (void)reloadTileOverlay:(id)a0;
- (id)viewForOverlay:(id)a0;
- (void)setTileOverlayPriority:(int)a0 forPayLoad:(id)a1;
- (void)updateReuseMultiLevelsForTileOverlayView:(id)a0;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
