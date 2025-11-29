@class NSString, IESECServiceProxy, FBKVOController, IESECWinContext;
@protocol IESECWinDataService, IESECWindowImageService, IESECWinTabService, IESECWinCategoryService, IESECWinAuthorService, IESECWinLynxPreloadService, IESECWinTabViewControllerManager, IESECWinSplitService, IESECWinDataStatusService;

@interface IESECWinDataController : NSObject <IESECWinContextProtocol, IESECWinDataControllerProtocol> {
    IESECWinContext *_context;
}

@property (retain, nonatomic) FBKVOController *kvoCtrl;
@property (retain, nonatomic) IESECServiceProxy<IESECWinTabService> *tabService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinSplitService> *splitService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinCategoryService> *categoryService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinDataStatusService> *dataStatusService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinLynxPreloadService> *lynxPreloadService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinTabViewControllerManager> *contentVCManager;
@property (retain, nonatomic) IESECServiceProxy<IESECWinAuthorService> *authorService;
@property (retain, nonatomic) IESECServiceProxy<IESECWindowImageService> *imageService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeDataIsPrefetch:(BOOL)a0;
- (void)initializeSecondaryDataIsPrefetch:(BOOL)a0;
- (void)requestTabApiIsPrefetch:(BOOL)a0;
- (id)configTabApi;
- (void)configWithHeaderResponse:(id)a0;
- (void)configWithTabResponse:(id)a0;
- (void)fetchExtensionCard:(id)a0;
- (void)requestHotSaleInsertCardDataIfNeeded;
- (void)configWithTabBFFResponse:(id)a0;
- (void)setExtensionCardRequestOnAir:(id)a0 withTabType:(unsigned long long)a1 categoryID:(id)a2;
- (void)configWithExtensionCardResponse:(id)a0 withTabType:(unsigned long long)a1 categoryID:(id)a2;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
