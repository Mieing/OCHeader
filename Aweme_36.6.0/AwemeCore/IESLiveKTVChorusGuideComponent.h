@protocol HTSKVStore;

@interface IESLiveKTVChorusGuideComponent : IESLiveInteractComponentBase

@property (weak, nonatomic) id<HTSKVStore> kvStore;

- (void)componentMount;
- (void)showFirstGuideIfNeed;
- (void).cxx_destruct;

@end
