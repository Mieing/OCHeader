@interface DolphinDataSourcePreProcessTask : DolphinRerankBaseTask

- (void)taskExcute;
- (void)onTaskInit;
- (BOOL)shouldBeExcuted:(BOOL)a0 error:(id)a1 input:(id)a2;
- (id)currentSortedDataSourceGenerateNewIdForAds:(BOOL)a0;

@end
