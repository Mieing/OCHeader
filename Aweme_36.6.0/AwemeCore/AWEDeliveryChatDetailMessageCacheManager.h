@class NSMutableDictionary;

@interface AWEDeliveryChatDetailMessageCacheManager : NSObject

@property (retain) NSMutableDictionary *cardStateStorage;

- (void)setCardState:(long long)a0 cardIdentifier:(id)a1 cardModel:(id)a2;
- (id)getCardStateWithCardIdentifier:(id)a0;
- (void)setLocalMediaFilePath:(id)a0 msgIdentifier:(id)a1;
- (id)getLocalMediaFilePathWithMsgIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
