@class AWEPlayInteractionConfigsHelper;

@interface AWEPlayInteractionElementConfigs : NSObject

@property (retain, nonatomic) AWEPlayInteractionConfigsHelper *helper;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPadBizUIAdapterClass;
+ (Class)aAWEPlayInteractionAdapterClass;
+ (Class)aAWEPlayInteractionDSAdapterClass;
+ (Class)aAWEPlayInteractionElementConfigsAdapterClass;
+ (Class)aAWEPlayInteractionElementConfigsLGAdapterClass;

- (id)aAWEPadModuleAdapter;
- (id)aAWEPadBizUIAdapter;
- (id)aAWEPlayInteractionAdapter;
- (id)aAWEPlayInteractionDSAdapter;
- (void)setupLeftContainer:(id)a0;
- (void)setupRightContainer:(id)a0;
- (BOOL)isInteractionOptEnable;
- (BOOL)bizDowngradeWithClassName:(id)a0;
- (BOOL)hasCoCreatorCommonButtonInfo;
- (id)nearbyModuleService;
- (id)getLeftContainerClassArray;
- (id)customLeftContainerElement:(id)a0;
- (id)updateRiskNoticeElementPositionIfNeededForArr:(id)a0;
- (id)getLeftCreativeInspirationArr;
- (id)getLeftLunaCardArr;
- (id)getLeftMallFeedDetailArr;
- (id)getLeftNeaybyArr;
- (id)getLeftArticleArr;
- (id)getLeftBulletScreenArr;
- (id)getLeftRemotePlayArr;
- (id)getLeftCommonVideoArr;
- (id)getLeftUserElementName;
- (id)getDescriptionElementName;
- (BOOL)shouldUseJXPlayer;
- (BOOL)shouldHideDanmakuInLeft;
- (void)addDanmakuSwitchElementIfNeed:(id)a0;
- (id)getRemotePlayAndCommomVideoArr;
- (id)aAWEPlayInteractionElementConfigsAdapter;
- (id)aAWEPlayInteractionElementConfigsLGAdapter;
- (id)getRightContainerClassArray;
- (id)customRightContainerElement:(id)a0;
- (id)getLiteShareFissionInnerFeedRightArr;
- (id)getRightLunaCardArr;
- (id)getRightRemotePlayArr;
- (id)getArticleFeedRightArr;
- (id)getRightCommonVideoArr;
- (void)insertRightDislikeButton:(id)a0;
- (void)__reconsitutionBottomContainer:(id)a0;
- (void)setupBottomContainer:(id)a0;
- (void).cxx_destruct;

@end
