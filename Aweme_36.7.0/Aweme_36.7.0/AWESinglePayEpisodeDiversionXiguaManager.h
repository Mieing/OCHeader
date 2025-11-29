@class AWESinglePayEpisodeDiversionXiguaModel, AWERVDetailPageContext, AWEAwemeModel;
@protocol AWEHttpTask;

@interface AWESinglePayEpisodeDiversionXiguaManager : NSObject

@property (retain, nonatomic) id<AWEHttpTask> httpTask;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWESinglePayEpisodeDiversionXiguaModel *diversionModel;
@property (nonatomic) BOOL hasShownAlert;
@property (weak, nonatomic) AWERVDetailPageContext *pageContext;
@property (copy, nonatomic) id /* block */ exitPageBlock;

+ (Class)aAWEDiversionXiguaCommonAdapterClass;
+ (BOOL)frequencyEnable;
+ (BOOL)enableInScene:(long long)a0;
+ (BOOL)continuousShowFrequencyEnable;
+ (BOOL)continuousCloseFrequencyEnable;
+ (long long)daySince1970:(id)a0;
+ (id)config;
+ (id)storage;

- (id)commonTrackParameters:(id)a0;
- (id)zlink;
- (id)aAWEDiversionXiguaCommonAdapter;
- (id)coldLaunchPath;
- (void)currentPlayModelDidChange:(id)a0;
- (BOOL)shouldShowDiversionAlertOnExit;
- (void)showDiversionAlertIfNeededOnExit;
- (void)showDiversionAlertIfNeededOnExitPay;
- (void)diversionModelDidUpdate:(id)a0;
- (BOOL)shouldShowDiversionAlertInScene:(long long)a0;
- (id)currentConfigInScene:(long long)a0;
- (void)showDiversionAlertWithConfig:(id)a0 completion:(id /* block */)a1;
- (BOOL)isXiguaInstalled;
- (id)trackParamsWithConfig:(id)a0;
- (void)handleRouteToXigua:(id)a0;
- (id)lvideoDetailUrl:(id)a0;
- (id)coldLaunchUrl:(id)a0;
- (void)traceZlinkWithSchema:(id)a0 config:(id)a1;
- (void)diversionAlertDidClick:(BOOL)a0 config:(id)a1;
- (void)diversionAlertDidShow:(id)a0;
- (id)xiguaSchemaHost;
- (id)commonRouteParams:(id)a0;
- (id)zlinkUrlString:(id)a0;
- (id)lvideoDetailPath;
- (id)lvideoDetailCommonRouteParams:(id)a0;
- (id)lvideoDetailPresentVIPParams:(id)a0;
- (id)trackStringOfScene:(long long)a0;
- (void).cxx_destruct;

@end
