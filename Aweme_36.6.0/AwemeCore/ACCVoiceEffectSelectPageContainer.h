@class ACCVoiceEffectCategoryDataSource, ACCVoiceEffectCollectionPage;

@interface ACCVoiceEffectSelectPageContainer : UIViewController

@property (retain, nonatomic) ACCVoiceEffectCollectionPage *collectionPage;
@property (nonatomic) unsigned long long tabIndex;
@property (retain, nonatomic) ACCVoiceEffectCategoryDataSource *dataSource;

- (void)injectDataSource:(id)a0;
- (BOOL)pageContainerReadyToShow;
- (void)injectCollectionPage:(id)a0;
- (void)pageContainerWillShow;
- (void)pageContainerDidDismiss;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;

@end
