@protocol IESLiveHybridContainerFactoryAdapter;

@interface IESLiveKTVOrderPanelDynamicRecommendRoomSectionModel : IESLiveKTVOrderPanelBaseSectionModel

@property (weak, nonatomic) id<IESLiveHybridContainerFactoryAdapter> webviewFactory;

- (void)refreshModelWithFatherModel:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)sectionType;
- (Class)sectionClass;

@end
