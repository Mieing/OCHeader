@class AWEECOMIMAuthorChatDetailVCBiz, AWEECOMIMAuthorInputView, AWEECOMIMExtraCardModel;

@interface AWEECOMIMAuthorChatDetailViewController : AWEECOMIMChatDetailViewController

@property (retain, nonatomic) AWEECOMIMAuthorChatDetailVCBiz *messageListBiz;
@property (retain, nonatomic) AWEECOMIMAuthorInputView *inputboxView;
@property (retain, nonatomic) AWEECOMIMExtraCardModel *extraCardModel;
@property (nonatomic) BOOL hasShowExtraCard;

+ (Class)detailVCBizClass;

- (id)requestCommonParams;
- (void)registerMsgCells;
- (void)createConversationBlock:(id /* block */)a0;
- (id)btmPageID;
- (void)dealExtraCardAfterCreateConv;
- (void)dealPredictResultWithModel:(id)a0 completion:(id /* block */)a1;
- (id)curConversationExtraCardShowKVKey;
- (void)generateInputView;
- (void)msgCellDidSkipToReport:(id)a0 fromSource:(id)a1;
- (BOOL)fetchUserConfigEnable;
- (BOOL)fetchChatTopInfoDataEnable;
- (void)fetchSubTitleInfoAndRefreshUI;
- (void)fetchTitleInfoAndRefreshUIWithChatGroup:(id)a0;
- (void)fetchConversationQueuedCountAndRefreshUI;
- (void)autoSendUserSwitchToHuman;
- (void)fetchShopSchemaWithCompletion:(id /* block */)a0;
- (void)fetchChatIconsAndRefreshChatNavigationView;
- (void)fetchProductOrOrderWithCompletion:(id /* block */)a0;
- (void)dealRobotOrderPredictResultNoticeWithParams:(id)a0;
- (void)dealServerOrderPredictWithCompletion:(id /* block */)a0;
- (BOOL)checkIsCurrentChatQueueCountUpdateWithBodyDict:(id)a0;
- (void)sendGoodsCardWithItemModel:(id)a0;
- (void)sendGoodsCardWithItemModel:(id)a0 completion:(id /* block */)a1;
- (void)sendOrderCardWithItemModel:(id)a0;
- (void)sendOrderCardWithItemModel:(id)a0 completion:(id /* block */)a1;
- (id)pagePigeonShopID;
- (id)pagePigeonBizType;
- (BOOL)canSendUserEnterFromGoodsOrOrder;
- (id)pageNameForPerformanceTracker;
- (long long)pageInbox;
- (void)updateTitleInfoWithUICacheInfo;
- (void).cxx_destruct;
- (id)serviceType;
- (void)viewDidLoad;
- (id)pageName;

@end
