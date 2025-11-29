@class NSMutableDictionary, NSArray, BDXBridgeEventSubscriber, UIView, NSMutableArray, NSString;
@protocol HunterContainerProtocol, AWEPostPageElementCenter;

@interface AWEPostPageTitleTemplateElement : AWEPostPageElement

@property (weak, nonatomic) id<AWEPostPageElementCenter> elementCenter;
@property (retain, nonatomic) NSMutableArray *categoryModelList;
@property (retain, nonatomic) NSMutableArray *categoryOrder;
@property (retain, nonatomic) NSMutableArray *dataList;
@property (retain, nonatomic) UIView<HunterContainerProtocol> *hybridContainer;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (retain, nonatomic) NSMutableDictionary *recommendData;
@property (retain, nonatomic) NSArray *recommendTagOrder;
@property (retain, nonatomic) NSString *schema;
@property (nonatomic) BOOL firstRenderOpt;
@property (nonatomic) BOOL didAppear;

+ (void)_aweLazyRegisterPostPage;
+ (Class)featureConfigClass:(id)a0;
+ (id)type;

- (void)openPanel;
- (id)publishViewModel;
- (id)trackerCommonParams;
- (BOOL)isRecommendOn;
- (void)elementAppear;
- (void)bindServices:(id)a0;
- (BOOL)forceReceiveEvents;
- (id)titleTemplateService;
- (void)sendTitleTemplateContent:(id)a0;
- (void)recordChooseTitleTemplate:(id)a0;
- (void)handleOpenHunterSchema;
- (void)buildRecommendDataWithTagsList:(id)a0;
- (void)prepareRecommendTagsListWithComplete:(id /* block */)a0;
- (void)registerLynxBridgeObservers;
- (BOOL)imageAlbumPublishAsNoteStyleEnable;
- (void)fetchTitleTemplateModelsWithCategory:(id)a0 completion:(id /* block */)a1;
- (void)fetchCategoryModelListWithCompletion:(id /* block */)a0;
- (id)titleTemplateSchema;
- (id)sortDataList:(id)a0;
- (id)handleRecommendDataList:(id)a0;
- (id)convertDataToClientDataList:(id)a0;
- (BOOL)enable;
- (void).cxx_destruct;
- (BOOL)isVisible;
- (void)prepare;
- (BOOL)isEnabled;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)addObservers;
- (void)prepareData;

@end
