@class QCustomLayerTileOverlay, NSString;

@interface QCustomLayer : NSObject

@property (retain, nonatomic) QCustomLayerTileOverlay *handler;
@property (copy, nonatomic) NSString *layerID;

- (void).cxx_destruct;

@end
