@interface DolphinResultAnalyzeTask : DolphinRerankBaseTask

- (void)taskExcute;
- (void)onTaskInit;
- (BOOL)shouldBeExcuted:(BOOL)a0 error:(id)a1 input:(id)a2;
- (id)generateIndexChangeOutPutModel:(id)a0;

@end
