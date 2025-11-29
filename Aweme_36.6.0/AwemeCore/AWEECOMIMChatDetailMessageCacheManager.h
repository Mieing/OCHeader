@class NSMutableDictionary;

@interface AWEECOMIMChatDetailMessageCacheManager : NSObject

@property (retain) NSMutableDictionary *cardStateStorage;
@property (retain) NSMutableDictionary *rateCardDraftStorage;
@property (retain) NSMutableDictionary *cellTimeStorage;
@property (retain) NSMutableDictionary *localExtStorage;

- (void)setCardState:(long long)a0 cardIdentifier:(id)a1 cardModel:(id)a2;
- (id)getCardStateWithCardIdentifier:(id)a0;
- (void)setLocalMediaFilePath:(id)a0 msgIdentifier:(id)a1;
- (id)getLocalMediaFilePathWithMsgIdentifier:(id)a0;
- (void)setRateCardDraft:(id)a0 msgIdentifier:(id)a1;
- (id)getRateCardDraftWithMsgIdentifier:(id)a0;
- (void)setCellBuildStartTime:(double)a0 msgIdentifier:(id)a1;
- (double)cellBuildStartTimeWithMsgIdentifier:(id)a0;
- (void)setLynxMessageRawDataStorage:(id)a0 msgIdentifier:(id)a1;
- (id)lynxMessageRawDataStorage:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
