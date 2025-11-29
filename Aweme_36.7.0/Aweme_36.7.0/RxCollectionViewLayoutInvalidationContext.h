@interface RxCollectionViewLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {
    long long _invalidateEverything;
    long long _invalidateDataSourceCounts;
}

@property (nonatomic) long long intent;
@property (nonatomic) BOOL invalidateEverything;
@property (nonatomic) BOOL invalidateDataSourceCounts;

+ (id)withContext:(id)a0;

- (id)initWithCollectionViewLayoutInvalidationContext:(id)a0;
- (id)description;
- (id)init;
- (long long)_intent;
- (void)_setIntent:(long long)a0;

@end
