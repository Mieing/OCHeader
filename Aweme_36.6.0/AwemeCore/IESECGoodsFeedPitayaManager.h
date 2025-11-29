@class NSMutableArray;

@interface IESECGoodsFeedPitayaManager : NSObject

@property (nonatomic) BOOL hasAddPitayaReadyObserver;
@property (retain, nonatomic) NSMutableArray *observeBlocks;

- (void)registerKey:(id)a0 Handler:(id /* block */)a1;
- (void).cxx_destruct;

@end
