@interface BDDataBuilderAnyOperator : BDDataBuilderBaseOperator

- (void)executeSetValueOperationWithInfo:(id)a0 dataInfo:(id)a1 isForward:(BOOL)a2;
- (void)executeAsUrlStrOperationWithInfo:(id)a0 dataInfo:(id)a1 isForward:(BOOL)a2;
- (void)executeAsArrOperationWithInfo:(id)a0 dataInfo:(id)a1 isForward:(BOOL)a2;
- (void)executeAsDictOperationWithInfo:(id)a0 dataInfo:(id)a1 isForward:(BOOL)a2;
- (void)executeAsJsonArrStrOperationWithInfo:(id)a0 dataInfo:(id)a1 isForward:(BOOL)a2;
- (void)executeAsJsonObjStrOperationWithInfo:(id)a0 dataInfo:(id)a1 isForward:(BOOL)a2;

@end
