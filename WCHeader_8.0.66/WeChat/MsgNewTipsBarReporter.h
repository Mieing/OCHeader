@class NSString;

@interface MsgNewTipsBarReporter : NSObject

@property (retain, nonatomic) NSString *chatName;
@property (nonatomic) unsigned long long userRole;
@property (nonatomic) unsigned long long roomMemberCount;
@property (nonatomic) unsigned long long tipsBarCount;

- (void)reportTipsBarExpandViewActionShow;
- (void)reportTipsBarExpandViewActionHide;
- (void)reportSimpleAction:(unsigned long long)a0;
- (void)reportBarRelatedAction:(unsigned long long)a0 tipsItem:(id)a1 barPositionIndex:(unsigned long long)a2;
- (void)reportBarCloseActionWithTipsItem:(id)a0 barPositionIndex:(unsigned long long)a1 barCloseScene:(unsigned long long)a2;
- (void)reportBarRelatedAction:(unsigned long long)a0 tipsItem:(id)a1 barPositionIndex:(unsigned long long)a2 barCloseScene:(unsigned long long)a3;
- (void)reportTopMessageRelatedAction:(unsigned long long)a0 topItemId:(id)a1 topMsgWrap:(id)a2;
- (void)reportTopMessageRelatedAction:(unsigned long long)a0 topItemId:(id)a1 topMsgWrap:(id)a2 barPositionIndex:(unsigned long long)a3 barCloseScene:(unsigned long long)a4 topMsgRechableType:(unsigned long long)a5;
- (void)reportAction:(unsigned long long)a0 barItemType:(unsigned long long)a1 barPositionIndex:(unsigned long long)a2 barCloseScene:(unsigned long long)a3 topItemId:(id)a4 liveId:(id)a5 topMsgType:(unsigned long long)a6 topMsgSubType:(unsigned long long)a7 topMsgBizType:(unsigned long long)a8 topMsgId:(long long)a9 topMsgRechableType:(unsigned long long)a10;
- (void)reportAction:(unsigned long long)a0 userRole:(unsigned long long)a1 chatName:(id)a2 chatRoomUV:(unsigned long long)a3 barItemType:(unsigned long long)a4 barPositionIndex:(unsigned long long)a5 barListLength:(unsigned long long)a6 barCloseScene:(unsigned long long)a7 topItemId:(id)a8 liveId:(id)a9 topMsgType:(unsigned long long)a10 topMsgSubType:(unsigned long long)a11 topMsgBizType:(unsigned long long)a12 topMsgId:(long long)a13 topMsgRechableType:(unsigned long long)a14 actionTs:(unsigned long long)a15;
- (unsigned long long)reportTypeForTipsItem:(id)a0;
- (void).cxx_destruct;

@end
