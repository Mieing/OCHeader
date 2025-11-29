@class NSString, IESLiveItemSharePanelView, IESLiveItemShareApi;

@interface IESLiveItemShareFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber, IESLiveItemShareRouter>

@property (retain, nonatomic) IESLiveItemSharePanelView *itemSharePanelView;
@property (retain, nonatomic) IESLiveItemShareApi *itemShareApi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)shareItemWithInfo:(id)a0 itemType:(id)a1 targetSchema:(id)a2 completion:(id /* block */)a3;
- (BOOL)isInMseqRoom;
- (void)trackMicroAppParamsEvent:(id)a0 withShareItemId:(id)a1 schema:(id)a2 fromPosition:(id)a3;
- (id)processedSchemaWithSchema:(id)a0 itemId:(id)a1 fromPosition:(id)a2;
- (void)addOpenMicroAppPSActionSheetItem;
- (void)addOpenMicroAppActionSheetItem;
- (void)getItemShareDataAndRefreshPanelView;
- (void)openMicroAppSchemaWithNode:(id)a0;
- (void)trackItemShareSuccessWithItemInfo:(id)a0 itemType:(id)a1;
- (void)shareItemWithInfo:(id)a0 item_type:(id)a1;
- (id)microAppParamsGenerateWithShareItemId:(id)a0 fromPosition:(id)a1;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
