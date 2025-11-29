@class NSString, AWEDetailTrendViewModel;
@protocol AWEDetailEnterAwemeDetailHost;

@interface AWEDetailTrendEnterAwemeDetailServiceImpl : AWEDetailEnterAwemeDetailServiceImpl <AWEAwemeDetailTableViewControllerDelegate> {
    id<AWEDetailEnterAwemeDetailHost> _host;
}

@property (weak, nonatomic) AWEDetailTrendViewModel *stateContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)detailTableViewController:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2 model:(id)a3;
- (void)enterAwemeDetailWithIndexPath:(id)a0 awemeModel:(id)a1;
- (id)initWithHost:(id)a0 stateContext:(id)a1;
- (void)enterAwemeDetailWithIndexPath:(id)a0 dataController:(id)a1 awemeModel:(id)a2 trendInfoModel:(id)a3;
- (id)schemaRequestActivityMobMapParams;
- (long long)transferIndexFromPanelToInner:(long long)a0;
- (id)schemaRequestExtraInfoParams;
- (BOOL)isValidTemplateVideoWithDefinition:(id)a0 duration:(double)a1;
- (id)generateTemplateVideoInfoData:(id)a0;
- (void)schemaDataVerifyWithSchema:(id)a0;
- (void)preloadShootResourceIfNeed:(id)a0;
- (void).cxx_destruct;
- (void)setHost:(id)a0;
- (id)host;

@end
