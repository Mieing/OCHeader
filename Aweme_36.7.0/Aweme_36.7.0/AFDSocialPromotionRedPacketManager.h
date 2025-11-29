@class NSMutableDictionary, NSString, BDXBridgeEventSubscriber, AFDPineappleRedPacketConfig, NSMutableArray;
@protocol AWEPlayInteractionPineappleRedPacketElementProtocol, AWEHttpTask;

@interface AFDSocialPromotionRedPacketManager : NSObject <AWEUserMessage, AWEPublishTaskMessage, AFDSocialPromotionRedPacketManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *localRedPacketInfoDict;
@property (retain, nonatomic) BDXBridgeEventSubscriber *redPacketEventSubscriber;
@property (retain, nonatomic) id<AWEHttpTask> currentOpenRedPacketPageRequest;
@property (copy, nonatomic) NSString *currentOpenRedPacketPageAwemeID;
@property (copy, nonatomic) NSString *currentDisplayingAwemeID;
@property (retain, nonatomic) NSMutableArray *publishOpeningAwemeIDs;
@property (retain, nonatomic) AFDPineappleRedPacketConfig *config;
@property (weak, nonatomic) id<AWEPlayInteractionPineappleRedPacketElementProtocol> currentShowingRedPacketElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)p_currentTabName;
+ (id)trackStringForRedPacketStatus:(unsigned long long)a0;
+ (id)trackStringForRedPacketSubType:(unsigned long long)a0;
+ (BOOL)isMgRedPacketWithModel:(id)a0;
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
- (void)p_redPacketStateEventCallBackWithParams:(id)a0;
- (void)p_updateRedPacketStatusForAwemeID:(id)a0 status:(unsigned long long)a1;
- (void)requestRedPacketStatusWithAweme:(id)a0 isAutoOpen:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)hasCommentedAwemeWithID:(id)a0;
- (BOOL)p_sanityCheckBeforeRequestingRedPacketPageForAweme:(id)a0;
- (id)p_getLocalRedPacketInfoWithAwemeID:(id)a0 force:(BOOL)a1;
- (void)openRedPacketPageOnAweme:(id)a0 trackParams:(id)a1 completion:(id /* block */)a2;
- (void)debug_clearAllStroage;
- (BOOL)sanityCheckBeforePublishOpenRedPacketPageForAweme:(id)a0 shouldForbidTabRestrict:(BOOL)a1;
- (void)routeToRedPacketPageWithAweme:(id)a0 response:(id)a1 trackParams:(id)a2 completion:(id /* block */)a3;
- (void)didFinishedPlayWithAweme:(id)a0 referString:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
