@protocol AWECommonFeedConfigProtocol;

@interface AWECommonFeedContainerViewModel : AWEBaseListViewModel

@property (weak, nonatomic) id<AWECommonFeedConfigProtocol> configManager;

- (void)updateConfigManager:(id)a0;
- (id)generateSectionViewModelsByFeedCardModels:(id)a0;
- (id)findSectionViewModelsByFeedCardModels:(id)a0;
- (id)generateSectionViewModelByFeedCardModel:(id)a0;
- (id)findSectionViewModelByFeedCardModel:(id)a0;
- (void).cxx_destruct;

@end
