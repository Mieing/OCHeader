@interface BDAAppStorePreloadActionModel : BDAAppStoreActionModel

@property (nonatomic) BOOL isDuplicate;
@property (copy, nonatomic) id /* block */ preloadCompletion;

- (void).cxx_destruct;

@end
