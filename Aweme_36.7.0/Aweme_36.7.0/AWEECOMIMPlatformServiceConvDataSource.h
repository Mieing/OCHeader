@class NSArray, AWEECOMIMNetworkImp, NSString;

@interface AWEECOMIMPlatformServiceConvDataSource : NSObject <AWEECOMIMConvDataSourceProtocol>

@property (copy) NSArray *curDataModels;
@property (weak, nonatomic) AWEECOMIMNetworkImp *networkImp;
@property (copy, nonatomic) id /* block */ dataSourceUpdated;
@property (nonatomic) BOOL shouldNotMergeUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)markConversationReadWithModel:(id)a0 completion:(id /* block */)a1;
- (void)markAllConversationReadWithCompletion:(id /* block */)a0;
- (void)fetchConversationsWithCompletion:(id /* block */)a0;
- (void)configConversationTopWithIsTop:(BOOL)a0 model:(id)a1 completion:(id /* block */)a2;
- (void)configConversationMuteWithIsMute:(BOOL)a0 model:(id)a1 completion:(id /* block */)a2;
- (void)deleteConversationWithModel:(id)a0 completion:(id /* block */)a1;
- (void)businessConversationUpdate:(id)a0;
- (void)readAllBusinessMessageWithBizType:(long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
