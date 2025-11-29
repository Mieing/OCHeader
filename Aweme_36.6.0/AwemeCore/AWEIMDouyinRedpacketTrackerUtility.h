@class NSString;

@interface AWEIMDouyinRedpacketTrackerUtility : HTSService <AWEIMDouyinRedpacketTrackerUtility>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackRedPacketDetailEvent:(id)a0 message:(id)a1 info:(id)a2 param:(id)a3;
- (void)trackSendRedPacketEvent:(id)a0 conversation:(id)a1 param:(id)a2;
- (void)trackRedPacketMessageEvent:(id)a0 message:(id)a1 info:(id)a2 param:(id)a3;
- (void)trackRedPacketNoticeMessageEvent:(id)a0 message:(id)a1 param:(id)a2;
- (void)trackRedPacketWindowEvent:(id)a0 message:(id)a1 info:(id)a2 param:(id)a3;
- (void)trackVideoRedPacketEvent:(id)a0 info:(id)a1 coverModel:(id)a2 param:(id)a3;
- (void)trackBridgeInvokeWithMethod:(id)a0 paramModel:(id)a1;
- (void)trackBridgeCallbackWithMethod:(id)a0 resultModel:(id)a1 status:(id)a2;
- (void)trackEvent:(id)a0 param:(id)a1;
- (id)redPacketTypeString:(unsigned long long)a0;
- (id)redPacketSubtypeString:(unsigned long long)a0;
- (id)redPacketInfoStatusString:(unsigned long long)a0;
- (id)redPacketSourceString:(long long)a0;
- (id)redPacketTypeNewString:(unsigned long long)a0;
- (id)redPacketProductString:(unsigned long long)a0;
- (BOOL)isAcquaintanceGroupWithConversationId:(id)a0;
- (BOOL)isMessageSendFromMe:(id)a0;
- (id)detailRedPacketInfoStatusString:(id)a0;
- (id)getRedpacketCommonParams;
- (id)p_imCommonParamWithInfo:(id)a0 message:(id)a1;
- (void)trackEvent:(id)a0 totalParam:(id)a1 param:(id)a2 conversation:(id)a3;
- (void)trackEvent:(id)a0 totalParam:(id)a1 param:(id)a2;
- (id)redPacketSourceTypeStringWithInfo:(id)a0;
- (id)p_isOwnerStringWithInfo:(id)a0 isSendFromMe:(BOOL)a1;
- (id)orderIdFromMessage:(id)a0;
- (id)redPacketSourceTypeStringWithMessage:(id)a0;
- (id)p_isOwnerStringWithMessage:(id)a0;

@end
