@class NSArray;

@interface AWECoverTextEffectsViewModel : NSObject

@property (copy, nonatomic) NSArray *cellModels;
@property (copy, nonatomic) NSArray *fonts;
@property (nonatomic) double fontScale;

- (void)startFetchCoverTextList:(id /* block */)a0;
- (BOOL)enableLoadingOptimizeWhenNoNetworkWithTextResponse:(id)a0 fontResponse:(id)a1;
- (void)p_generateCellModelsWithEffectList:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
