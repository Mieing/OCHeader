@class NSString, NSDictionary, AWEAwemeModel;

@interface AFDRichAwemeFullPageAnchorViewModel : AFDRichAwemeFullPageBaseViewModel <AFDRichAwemeFullPageAnchorViewModelProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSString *priorityType;
@property (retain, nonatomic) AWEAwemeModel *enterModel;
@property (nonatomic) BOOL shouldHidePOIAnchor;
@property (nonatomic) BOOL shouldHideOtherExtraAnchor;
@property (nonatomic) BOOL shouldForceShowSmallGoodsAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)configMusicAnchorModel;
- (void)trackAnchorShowWithExtraInfo:(id)a0;
- (void)trackGoodsAnchorViewShowIfNeedWithHost:(id)a0;
- (id)configExtraAnchorModel;
- (id)initWithContext:(id)a0 awemeModel:(id)a1;
- (id)iconWithName:(id)a0 whiteIconName:(id)a1 needWhiteIcon:(BOOL)a2;
- (id)styleIconFromModel:(id)a0;
- (id)musicDescLabelText;
- (void)p_enterMusicDetailWithClickExtraDict:(id)a0;
- (void)p_onIronManClick;
- (void)p_showGoodsPanel;
- (void)p_enterLocalLifeDetail;
- (void)p_onOpenPlatformAnchorClick;
- (void)p_enterStickerDetail;
- (void)p_enterMvDetail;
- (void)p_onMediumClick;
- (void)p_enterGameDetail;
- (void)p_enterGeneralAnchorDetail;
- (void)p_onGreenScreenAnchorClick;
- (void)p_onCarAnchorClick;
- (void)p_onNormalAppClick;
- (void)p_gamecpAnchorClick;
- (id)extraAnchorModelWithAweme:(id)a0 priorityKey:(id)a1 needWhiteIcon:(BOOL)a2 tapAnchorBlock:(id /* block */)a3;
- (id)anchorTypeWhiteList;
- (id)anchorTypeBlackList;
- (id)weakCommonStyleIcon:(id)a0;
- (void)trackAnchorClick:(id)a0 extraInfo:(id)a1;
- (BOOL)isXingtuAnchor;
- (id)typeStringForGeneralAnchor;
- (id)getGameCPAnchorReportParams;
- (void)preloadMarkAnchorHomePageWithSchema:(id)a0;
- (void)preloadGoodsAnchorHomePageWithSchema:(id)a0;
- (id)welfareRouterPathStringWith:(id)a0;
- (id)p_appendEnterFromToOpenURL:(id)a0;
- (id)createMusicAnchorModel;
- (void).cxx_destruct;

@end
