@class NSMutableDictionary, NSString, BDXBridgeEventSubscriber, AWEAwemeModel, NSMutableArray, AFDPineappleRedPacketConfig;
@protocol AWEHttpTask;

@interface AFDPineappleRedPacketManager : NSObject <AWEUserMessage, AWEPublishTaskMessage, AFDPineappleRedPacketManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *localRedPacketInfoDict;
@property (retain, nonatomic) BDXBridgeEventSubscriber *redPacketEventSubscriber;
@property (retain, nonatomic) id<AWEHttpTask> currentOpenRedPacketPageRequest;
@property (copy, nonatomic) NSString *currentOpenRedPacketPageAwemeID;
@property (copy, nonatomic) NSString *currentDisplayingAwemeID;
@property (retain, nonatomic) NSMutableArray *publishOpeningAwemeIDs;
@property (retain, nonatomic) AWEAwemeModel *currentCreatorAweme;
@property (copy, nonatomic) NSString *flashNameText;
@property (retain, nonatomic) AFDPineappleRedPacketConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowByLuckySettings;
+ (id)p_currentTabName;
+ (id)trackStringForRedPacketStatus:(unsigned long long)a0;
+ (id)trackStringForRedPacketSubType:(unsigned long long)a0;
+ (id)sharedInstance;

- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)addVideoPlayTrackParamsTo:(id)a0 forAweme:(id)a1;
- (BOOL)canPublishOpenRedPacketPageForAweme:(id)a0;
- (BOOL)shouldShowRedPacketButtonWithAweme:(id)a0;
- (unsigned long long)redPacketStatusOnAweme:(id)a0;
- (void)startPlayingAweme:(id)a0;
- (void)cancelRedPacketPageRequest;
- (void)endPlayingAweme:(id)a0;
- (unsigned long long)redPacketSubTypeWithAweme:(id)a0;
- (void)openRedPacketPageOnAweme:(id)a0 trackParams:(id)a1 directOpen:(BOOL)a2 canBeBlocked:(BOOL)a3 completion:(id /* block */)a4;
- (void)trackRedPacketButtonEvent:(id)a0 aweme:(id)a1 referString:(id)a2 trackContext:(id)a3;
- (void)markAwemeAsCommentedWithID:(id)a0;
- (id)p_getCustomStickerDictWithAweme:(id)a0;
- (BOOL)p_isAnswerToQuestionVideoWithAweme:(id)a0;
- (id)p_getAnswerToQuestionAwemeIDWithAweme:(id)a0;
- (id)p_getQuestionStickerIDWithAweme:(id)a0;
- (id)p_getQuestionCustomStickerIDWithAweme:(id)a0;
- (void)markAwemeAsHasAutoOpened:(id)a0;
- (BOOL)p_isAnsweringQuestionWithAweme:(id)a0;
- (void)routeToAnswerQuestionPageWithAweme:(id)a0 response:(id)a1 trackParams:(id)a2 completion:(id /* block */)a3;
- (void)p_addQuickFlashExtraParamsTo:(id)a0 withAweme:(id)a1;
- (void)p_modifyQuickFlashShootWayInParams:(id)a0;
- (void)routeToQuickFlashPageWithAweme:(id)a0 response:(id)a1 trackParams:(id)a2 completion:(id /* block */)a3;
- (void)p_redPacketStateEventCallBackWithParams:(id)a0;
- (void)p_luckySettingsDidChange:(id)a0;
- (void)p_updateRedPacketStatusForAwemeID:(id)a0 status:(unsigned long long)a1;
- (void)routeToRedPacketPageWithSubType:(unsigned long long)a0 aweme:(id)a1 response:(id)a2 trackParams:(id)a3 completion:(id /* block */)a4;
- (void)p_showNeedDenyAlertDialogWithSubType:(unsigned long long)a0 confirmAction:(id /* block */)a1;
- (void)p_followAuthorWithAweme:(id)a0 completion:(id /* block */)a1;
- (void)p_showNeedFollowAlertDialogWithSubType:(unsigned long long)a0 confirmAction:(id /* block */)a1;
- (void)requestRedPacketStatusWithAweme:(id)a0 isAutoOpen:(BOOL)a1 completion:(id /* block */)a2;
- (void)p_routeToRedPacketPageWithAweme:(id)a0 response:(id)a1 trackParams:(id)a2 completion:(id /* block */)a3;
- (BOOL)hasCommentedAwemeWithID:(id)a0;
- (BOOL)p_sanityCheckBeforeRequestingRedPacketPageForAweme:(id)a0;
- (BOOL)p_sanityCheckBeforePublishOpenRedPacketPageForAweme:(id)a0 shouldForbidTabRestrict:(BOOL)a1;
- (id)p_getLocalRedPacketInfoWithAwemeID:(id)a0 force:(BOOL)a1;
- (void)p_trackFollowAuthorWithAweme:(id)a0;
- (id)p_replaceFlashNameIfNeededInString:(id)a0;
- (void)openRedPacketPageOnAweme:(id)a0 trackParams:(id)a1 completion:(id /* block */)a2;
- (void)publishOpenRedPacketPageWithAweme:(id)a0 redPacketSchema:(id)a1 trackParams:(id)a2 completion:(id /* block */)a3;
- (BOOL)isAnswerToQuestionVideoWithAweme:(id)a0;
- (void)debug_clearAllStroage;
- (BOOL)debug_canShow;
- (BOOL)hasAutoOpenedOnAwemeWithID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
