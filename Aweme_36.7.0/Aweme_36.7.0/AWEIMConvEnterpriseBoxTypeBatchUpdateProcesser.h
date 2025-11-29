@class NSString;

@interface AWEIMConvEnterpriseBoxTypeBatchUpdateProcesser : AWEIMConvBoxTypeBatchUpdateProcesser {
    BOOL _shouldRealTimeInjectRule;
    id /* block */ _batchUpdateRuleBlock;
    id /* block */ _realTimeUpdateRuleBlock;
    NSString *_uid;
}

+ (void)clearVersionWithUid:(id)a0;

- (BOOL)needBatchUpdateDB;
- (BOOL)hasBatchUpdateDone;
- (void)finishBatchUpdateAndSetNowVersion;
- (id)initWithUid:(id)a0 shouldRealTimeInjectRule:(BOOL)a1;
- (id /* block */)batchUpdateRuleBlock;
- (void)setBatchUpdateRuleBlock:(id /* block */)a0;
- (id /* block */)realTimeUpdateRuleBlock;
- (void)setRealTimeUpdateRuleBlock:(id /* block */)a0;
- (BOOL)shouldRealTimeInjectRule;
- (void)setShouldRealTimeInjectRule:(BOOL)a0;
- (BOOL)ifRelyConvSettingInfoChange;
- (id)uid;
- (void)setUid:(id)a0;
- (void).cxx_destruct;

@end
