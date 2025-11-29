@class QTileOverlayHandler;

@interface QTileOverlayInternalContext : NSObject

@property (weak, nonatomic) QTileOverlayHandler *payload;
@property (copy, nonatomic) id /* block */ loadTileBlock;
@property (copy, nonatomic) id /* block */ writeTileBlock;

- (void).cxx_destruct;

@end
