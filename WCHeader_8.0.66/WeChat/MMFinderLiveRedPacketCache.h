@class MemoryMappedKV, NSMutableDictionary, NSString, MMFinderLiveRedPacketMessage;

@interface MMFinderLiveRedPacketCache : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *redPacketDictionary;
@property (retain, nonatomic) MMFinderLiveRedPacketMessage *taggedRedPacketMessage;
@property (readonly, nonatomic) MemoryMappedKV *mmkv;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (id)mmkvID;
- (void)addRedPacketItem:(id)a0 forId:(id)a1;
- (id)redPacketItemForId:(id)a0;
- (id)queryRedPacketItemsForTaskId:(id)a0;
- (void)tagRedPacketWithMessage:(id)a0;
- (void)clearTagRedPacket;
- (id)mmkvKeyForStatusOpenWithItem:(id)a0;
- (void)redPacketItemDidOpen:(id)a0;
- (BOOL)isOpenedForRedPacketItem:(id)a0;
- (void)clearOutdatedDataForStatusOpenedInMMKV:(id)a0;
- (void).cxx_destruct;

@end
