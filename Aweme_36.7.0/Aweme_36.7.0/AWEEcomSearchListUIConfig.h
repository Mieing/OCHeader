@interface AWEEcomSearchListUIConfig : NSObject

@property (copy, nonatomic) id /* block */ minimumInteritemSpacingForSection;
@property (copy, nonatomic) id /* block */ minimumColumnSpacingForSection;
@property (copy, nonatomic) id /* block */ insetForSection;
@property (copy, nonatomic) id /* block */ invalidLayoutForBoundsChange;
@property (nonatomic) BOOL shouldEmbedCollectionViewInRootView;
@property (nonatomic) BOOL enableCacheItem;

- (void).cxx_destruct;
- (id)init;

@end
