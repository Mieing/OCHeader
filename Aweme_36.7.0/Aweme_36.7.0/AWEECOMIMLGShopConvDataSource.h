@class NSArray, NSDictionary, NSString, AWEECOMIMNetworkImp, NSObject;
@protocol OS_dispatch_queue;

@interface AWEECOMIMLGShopConvDataSource : NSObject <AWEECOMIMLGConvDataSourceProtocol>

@property (nonatomic) BOOL conversationUpdating;
@property (copy) NSArray *curDataModels;
@property (copy) NSDictionary *ID2DataModelsMap;
@property (copy) NSArray *curPigeonConvModels;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *messageProcessQueue;
@property (weak, nonatomic) AWEECOMIMNetworkImp *networkImp;
@property (copy, nonatomic) id /* block */ dataSourceUpdated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lastMsgContentWithMessage:(id)a0 conversation:(id)a1;

- (void)markConversationReadWithModel:(id)a0 completion:(id /* block */)a1;
- (void)markAllConversationReadWithCompletion:(id /* block */)a0;
- (void)fetchConversationsWithCompletion:(id /* block */)a0;
- (void)configConversationTopWithIsTop:(BOOL)a0 model:(id)a1 completion:(id /* block */)a2;
- (void)configConversationMuteWithIsMute:(BOOL)a0 model:(id)a1 completion:(id /* block */)a2;
- (void)deleteConversationWithModel:(id)a0 completion:(id /* block */)a1;
- (void)refetchAllConversations:(id)a0;
- (long long)getConvType:(id)a0;
- (void)updateAllDataAfterNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
