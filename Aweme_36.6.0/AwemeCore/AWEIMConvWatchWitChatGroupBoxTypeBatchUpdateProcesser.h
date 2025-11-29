@interface AWEIMConvWatchWitChatGroupBoxTypeBatchUpdateProcesser : AWEIMConvBoxTypeBatchUpdateProcesser {
    id /* block */ _realTimeUpdateRuleBlock;
}

- (BOOL)needBatchUpdateDB;
- (id /* block */)realTimeUpdateRuleBlock;
- (void)setRealTimeUpdateRuleBlock:(id /* block */)a0;
- (BOOL)ifRelyConvUnreadCountChange;
- (void).cxx_destruct;

@end
