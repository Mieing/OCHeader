@class QLayerManager, NSMutableDictionary, NSString, QBasicMapView, NSMutableArray;

@interface QBaseVisualLayerManager : NSObject

@property (retain, nonatomic) NSMutableArray *layers;
@property (retain, nonatomic) NSMutableDictionary *visualayerDict;
@property (weak, nonatomic) QBasicMapView *basicMapView;
@property (weak, nonatomic) QLayerManager *internalLayerManager;
@property (copy, nonatomic) NSString *apiKey;
@property (copy, nonatomic) NSString *configPath;

- (void)addLayer:(id)a0;
- (void)remove:(id)a0;
- (void)updateAuthenticationConfig:(id)a0;
- (void)requestVisualLayerData:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
