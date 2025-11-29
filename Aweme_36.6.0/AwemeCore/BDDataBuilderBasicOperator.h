@interface BDDataBuilderBasicOperator : BDDataBuilderBaseOperator

- (void)executeNoneOperationWithInfo:(id)a0 dataInfo:(id)a1 isForward:(BOOL)a2;
- (void)executeRemoveValueOperationWithInfo:(id)a0 dataInfo:(id)a1 isForward:(BOOL)a2;
- (void)executeIfExistOperationWithInfo:(id)a0 dataInfo:(id)a1 isForward:(BOOL)a2;
- (void)executeIfNotExistOperationWithInfo:(id)a0 dataInfo:(id)a1 isForward:(BOOL)a2;

@end
