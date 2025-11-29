@class NSCache;

@interface IESECGoodsDetailAccessibleManager : NSObject

@property (class, readonly, nonatomic) IESECGoodsDetailAccessibleManager *shared;

@property (retain, nonatomic) NSCache *accessibleLabelCache;

- (id)cachedAccessbleLabelForKey:(id)a0;
- (void)cacheAccessbleLabel:(id)a0 key:(id)a1;
- (void)prefetchAccessibleLabelFromImageURL:(id)a0 defaultLabelL:(id)a1 completion:(id /* block */)a2;
- (id)getAccessibleLabelFromImageURL:(id)a0;
- (id)getAccessibleLabelFromImage:(id)a0;
- (void).cxx_destruct;

@end
