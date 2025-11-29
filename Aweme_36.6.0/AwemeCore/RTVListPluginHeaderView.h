@class RTVListPluginContext;
@protocol RTVListViewControllerPlugin;

@interface RTVListPluginHeaderView : RTVCollectionSectionSupplementaryView

@property (readonly, nonatomic) id<RTVListViewControllerPlugin> plugin;
@property (readonly, nonatomic) RTVListPluginContext *context;

- (void)renderModel:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end
