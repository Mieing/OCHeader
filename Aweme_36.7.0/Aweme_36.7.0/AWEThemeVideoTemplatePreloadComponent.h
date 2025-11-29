@class NSString, AWEThemeVideoTaskQueue;
@protocol AWEMemoriesPlayerCoreService;

@interface AWEThemeVideoTemplatePreloadComponent : AWEMemoriesPlayerBaseComponent <AWEThemeVideoTemplateService>

@property (weak, nonatomic) id<AWEMemoriesPlayerCoreService> playerCoreService;
@property (retain, nonatomic) AWEThemeVideoTaskQueue *taskQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidLoad;
- (void)buildThemeVideoWithTileModel:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
- (void)startPreloadTemplate:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
