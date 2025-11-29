@interface BDDataBuilderArrOperator : BDDataBuilderBaseOperator

- (void)executeNavToIndexOperationWithInfo:(id)a0 dataInfo:(id)a1 isForward:(BOOL)a2;
- (void)executeAppendItemOperationWithInfo:(id)a0 dataInfo:(id)a1 isForward:(BOOL)a2;
- (void)executeInsertItemOperationWithInfo:(id)a0 dataInfo:(id)a1 isForward:(BOOL)a2;
- (void)executeRemoveAtIndexOperationWithInfo:(id)a0 dataInfo:(id)a1 isForward:(BOOL)a2;
- (id)getParentNodeOutputArr;

@end
