@interface AWEIMConvCountDownGroupBoxTypeBatchUpdateProcesser : AWEIMConvBoxTypeBatchUpdateProcesser {
    id /* block */ _realTimeUpdateRuleBlock;
}

- (BOOL)needBatchUpdateDB;
- (id /* block */)realTimeUpdateRuleBlock;
- (void)setRealTimeUpdateRuleBlock:(id /* block */)a0;
- (BOOL)ifRelyConvSettingInfoChange;
- (BOOL)ifRelyConvInfoChange;
- (BOOL)ifRelyConvUnreadCountChange;
- (void).cxx_destruct;

@end
