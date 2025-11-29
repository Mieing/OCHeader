@class AWESearchCachalotCardRenderModel, CachalotNodeViewModelBuildConfig;

@interface AWESearchViewModelBuildConfig : NSObject

@property (retain, nonatomic) AWESearchCachalotCardRenderModel *renderModel;
@property (retain, nonatomic) CachalotNodeViewModelBuildConfig *viewBuildModel;

- (void).cxx_destruct;
- (id)init;

@end
