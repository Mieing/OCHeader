@interface DolphinRerankCoreTask : DolphinRerankBaseTask

- (void)taskExcute;
- (void)onTaskInit;
- (BOOL)shouldBeExcuted:(BOOL)a0 error:(id)a1 input:(id)a2;
- (BOOL)helpAnalyzeRerankOldIdx:(long long)a0 newIdx:(long long)a1;

@end
