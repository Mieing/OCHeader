@class NSArray;

@interface AWENearbyTransformersViewModel : AWEBaseViewModel

@property (nonatomic) double thumbnailProcess;
@property (nonatomic) BOOL inFeed;
@property (nonatomic) BOOL shouldShowBackground;
@property (copy, nonatomic) NSArray *transformers;
@property (readonly, nonatomic) BOOL shouldDisplay;

- (void)trackTransformersShow;
- (BOOL)shouldShowColorTransformerTab;
- (void)trackerClickWithTransformer:(id)a0;
- (void)trackTransformersShowWithTransformer:(id)a0;
- (void)bindItemsView:(id)a0 withViewModel:(id)a1;
- (void)trackNearbyTransformerTypeTimor:(id)a0 event:(id)a1;
- (void).cxx_destruct;
- (long long)getStyle;

@end
