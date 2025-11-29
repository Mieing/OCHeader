@interface AWESolariaNearLineFeatureService : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

+ (id)sharedInstance;

- (void)fillExtra:(id)a0 withExtraFeatureConfig:(id)a1 reBuild:(BOOL)a2 completion:(id /* block */)a3;
- (void)fillExtra:(id)a0 withIESFeatureCenterConfig:(id)a1 reBuild:(BOOL)a2 completion:(id /* block */)a3;
- (void)fillExtra:(id)a0 withAdFeatureConfig:(id)a1 reBuild:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)isValidData:(id)a0;
- (void)fillNearLineExtraFeaturesWithConfig:(id)a0 type:(id)a1 extra:(id)a2 reBuild:(BOOL)a3 completion:(id /* block */)a4;
- (void)unlock;
- (void)lock;
- (id)init;

@end
