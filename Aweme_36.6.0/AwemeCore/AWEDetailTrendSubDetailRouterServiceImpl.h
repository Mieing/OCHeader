@class NSString, AWEDetailTrendViewModel;
@protocol AWEDetailMusicListViewModelProtocol, AWEDetailTrendTrackerService;

@interface AWEDetailTrendSubDetailRouterServiceImpl : NSObject <AWEDetailSubDetailRouterService>

@property (weak, nonatomic) id<AWEDetailMusicListViewModelProtocol> musicListDataContext;
@property (weak, nonatomic) AWEDetailTrendViewModel *trendViewModel;
@property (weak, nonatomic) id<AWEDetailTrendTrackerService> trendTrackerService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWitServiceProvider:(id)a0;
- (void)routerMusicDetailWithActionSender:(id)a0;
- (void)routerMusicDetailWithMusicModel:(id)a0;
- (void)routerEffectDetailWithEffectId:(id)a0 sourceType:(id)a1;
- (void)routerTemplateDetailWithMaterialModel:(id)a0;
- (void)routerJianYinTemplateDetailWithTemplateId:(id)a0;
- (BOOL)isSameEffectFromAwemeModelWithEffectID:(id)a0;
- (BOOL)isSameTemplateFromAwemeModelWithTemplateID:(id)a0;
- (void).cxx_destruct;

@end
