@class NSString, AWEDetailTrendViewModel;
@protocol AWEBottomShootViewBarContextProtocol, AWEDetailTemplateCreateVideoDelegate;

@interface AWEMusicDetailTemplateHelper : AWEMusicDetailFeatureHelper <AWEFollowShootChoosePopupDelegate, AWEDetailInnerFlowTemplateHelperProtocol>

@property (weak, nonatomic) AWEDetailTrendViewModel *trendsViewModel;
@property (weak, nonatomic) id<AWEBottomShootViewBarContextProtocol> barContext;
@property (retain, nonatomic) NSString *enterMethodForMiddlePage;
@property (weak, nonatomic) id<AWEDetailTemplateCreateVideoDelegate> createVideoDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isAvailableVideoCutMiddlePageSchema:(id)a0;
+ (void)jumpToVideoCutPageWithTemplateModel:(id)a0 trackParams:(id)a1;
+ (BOOL)checkIsLite;
+ (void)trackShootWith:(id)a0 trackParams:(id)a1;
+ (void)showVideoCutTemplateViewControllerWithTemplateModel:(id)a0 extraTrackParams:(id)a1 followShootSchema:(id)a2 followShootBlock:(id /* block */)a3;
+ (id)helperWithBottomBarContext:(id)a0;
+ (id)helperWithTrendsViewModel:(id)a0;
+ (Class)aAFDVideocutVCommonAdapterClass;
+ (void)trackVideoCutMiddlePageClickWithTemplateModel:(id)a0 groupID:(id)a1 trackParams:(id)a2 buttonName:(id)a3;
+ (unsigned long long)templateDetailEntranceTypeWithTrackParams:(id)a0;
+ (void)trackVideoCutMiddlePageShowWithTemplateModel:(id)a0 groupID:(id)a1 trackParams:(id)a2;
+ (id)templatePlayParamsWithTemplateModel:(id)a0 trackParams:(id)a1;
+ (id)videoCutMiddlePageCommonParamsWithTemplateModel:(id)a0 groupID:(id)a1 trackParams:(id)a2;
+ (BOOL)isVideoCutInstalled;
+ (BOOL)canJumpToVideoCutPage;
+ (id)enterMethodForShootWith:(id)a0;
+ (BOOL)isEnterMethodFromTrendsPage:(id)a0;
+ (void)trackCutSameTemplate:(id)a0 trackParams:(id)a1;

- (id)musicID;
- (void)jumpToVideoCutPageWithTemplateModel:(id)a0 trackParams:(id)a1;
- (BOOL)useCustomRouterActionWithSchema:(id)a0;
- (id)followShootSchema;
- (id)trendsID;
- (id)trendsName;
- (void)handleVideoCutMiddlePageSchema:(id)a0 trackParams:(id)a1;
- (id)aAFDVideocutVCommonAdapter;
- (void)showVideoCutMiddleSelectionView:(id)a0 extraTrackParams:(id)a1 context:(id)a2;
- (void)enterTemplateViewController:(id)a0 extraTrackParams:(id)a1;
- (id)createTemplateTrackParams:(id)a0;
- (id)awemeTrackInfos;
- (id)enterFromForTemplatePage:(id)a0;
- (void)pickTemplateModel:(id)a0 params:(id)a1;
- (void)enterTemplateViewControllerWithTemplateModel:(id)a0 extraTrackParams:(id)a1 followShootSchema:(id)a2;
- (id)templatePlayParamsWithTemplateModel:(id)a0 enterFrom:(id)a1 trackParams:(id)a2;
- (void)pickTemplateModel:(id)a0 extraTrackParams:(id)a1;
- (void)handleFollowShootSchema:(id)a0 templateModel:(id)a1 isMiddlePage:(BOOL)a2 trackParams:(id)a3;
- (void)trackFlowAuthWithEntranceType:(unsigned long long)a0 entity:(id)a1;
- (BOOL)shouldShowAlertWithModel:(id)a0;
- (void)showAlertWithModel:(id)a0 completion:(id /* block */)a1;
- (void)startPixelTemplate:(id)a0 trackParams:(id)a1;
- (id)enterFromForVideoCutSchema:(id)a0;
- (id)trendsInfos;
- (id)updateEnterMethodForFollowShootSchema:(id)a0 enterMethod:(id)a1;
- (void).cxx_destruct;
- (id)groupID;
- (id)authorID;
- (id)trendsType;

@end
