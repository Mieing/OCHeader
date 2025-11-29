@class NSString;

@interface CMessageCustomizeRecoverMgr : MMUserService <MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)checkNeedMessageCustomizeRecover;
- (id)getNeedMessageCustomizeRecoverSessions;
- (BOOL)handleMessageCustomizeRecoverWithHandler:(id /* block */)a0;
- (BOOL)handleMessageCustomizeRecoverWithUserName:(id)a0;
- (BOOL)handleAbnormalMsgsWithUserName:(id)a0 firstAbnormalCreateTimeMsg:(id)a1 maxBeforeAbnormalMsgCreateTime:(unsigned int)a2;
- (id)handleAbnormalMsgsOneBatchWithUserName:(id)a0 abnormalCreateTime:(unsigned int)a1 minCreateTime:(unsigned int *)a2;
- (unsigned int)getMaxBeforeAbnormalMsgCreateTimeWithUserName:(id)a0 firstAbnormalCreateTimeMsg:(id)a1;

@end
