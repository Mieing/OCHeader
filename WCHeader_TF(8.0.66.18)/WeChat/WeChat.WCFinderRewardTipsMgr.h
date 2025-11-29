@interface WeChat.WCFinderRewardTipsMgr : MMUserService <MMServiceProtocol> {
    void /* unknown type, empty encoding */ rewardTipsInfoList;
}

- (void)handleRewardTipsListBypMessageWithXml:(id)a0;
- (void)updateRewardTipsList:(id)a0;
- (id)rewardTipsInfoWithTriggerType:(unsigned long long)a0;
- (id)popRewardTipsInfoWithTriggerType:(unsigned long long)a0;
- (void)prefetchJumpInfoIfNeedWithTriggerType:(unsigned long long)a0;
- (void)prefetchJumpInfoWithTriggerTypes:(id)a0;
- (void)showRewardTipsInfoWithTriggerType:(unsigned long long)a0 params:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
