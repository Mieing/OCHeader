@class NSArray, NSDictionary;

@interface LOTLayerGroup : NSObject {
    NSDictionary *_modelMap;
    NSDictionary *_referenceIDMap;
}

@property (readonly, nonatomic) NSArray *layers;

- (void)_mapFromJSON:(id)a0 withAssetGroup:(id)a1 withFramerate:(id)a2;
- (id)initWithLayerJSON:(id)a0 withAssetGroup:(id)a1 withFramerate:(id)a2;
- (id)layerModelForID:(id)a0;
- (id)layerForReferenceID:(id)a0;
- (void).cxx_destruct;

@end
