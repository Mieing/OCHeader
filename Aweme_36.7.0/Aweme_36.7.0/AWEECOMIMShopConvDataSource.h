@class NSArray, NSDictionary, NSString, AWEECOMIMNetworkImp, NSObject;
@protocol OS_dispatch_queue;

@interface AWEECOMIMShopConvDataSource : NSObject <AWEECOMIMConvDataSourceProtocol>

@property (nonatomic) BOOL conversationUpdating;
@property (copy) NSArray *curDataModels;
@property (copy) NSDictionary *ID2DataModelsMap;
@property (copy) NSArray *curPigeonConvModels;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataProcessQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *messageProcessQueue;
@property (nonatomic) BOOL hideDarenConv;
@property (nonatomic) BOOL hideInstantRetailConv;
@property (weak, nonatomic) AWEECOMIMNetworkImp *networkImp;
@property (copy, nonatomic) id /* block */ dataSourceUpdated;
@property (nonatomic) BOOL shouldNotMergeUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEIMLGDOUYINLGCommonAdapterClass;
+ (id)lastMsgContentWithMessage:(id)a0 conversation:(id)a1;

- (void)markConversationReadWithModel:(id)a0 completion:(id /* block */)a1;
- (void)markAllConversationReadWithCompletion:(id /* block */)a0;
- (void)fetchConversationsWithCompletion:(id /* block */)a0;
- (id)aAWEIMLGDOUYINLGCommonAdapter;
- (void)configConversationTopWithIsTop:(BOOL)a0 model:(id)a1 completion:(id /* block */)a2;
- (void)configConversationMuteWithIsMute:(BOOL)a0 model:(id)a1 completion:(id /* block */)a2;
- (void)deleteConversationWithModel:(id)a0 completion:(id /* block */)a1;
- (void)refetchAllConversations:(id)a0;
- (long long)getConvType:(id)a0;
- (void)updateAllDataAfterNotification:(id)a0;
- (void)p_processConversationAfterFetchAll:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
