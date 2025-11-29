@class NSString;
@protocol IESLiveHybridContainerFactoryAdapter;

@interface IESLiveKTVOrderPanelBannerSectionModel : IESLiveKTVOrderPanelBaseSectionModel

@property (weak, nonatomic) id<IESLiveHybridContainerFactoryAdapter> webviewFactory;
@property (copy, nonatomic) NSString *activityUrl;
@property (copy, nonatomic) NSString *tabName;

- (void)refreshModelWithFatherModel:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)sectionType;
- (Class)sectionClass;

@end
