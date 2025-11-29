@class QCustomLayerConfigData, QTileOverlayManager, NSString, NSMutableArray;

@interface QCustomLayerManager : NSObject

@property (retain, nonatomic) NSMutableArray *layers;
@property (retain, nonatomic) QCustomLayerConfigData *config;
@property (weak, nonatomic) QTileOverlayManager *internalManager;
@property (copy, nonatomic) NSString *businessKey;

- (id)init;
- (void)addCustomLayer:(id)a0;
- (void)removeCustomLayer:(id)a0;
- (void)updateAuthenticationConfig:(id)a0;
- (void)doAddTileOverlay:(id)a0;
- (void).cxx_destruct;

@end
