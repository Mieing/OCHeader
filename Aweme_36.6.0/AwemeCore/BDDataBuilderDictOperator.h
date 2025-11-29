@interface BDDataBuilderDictOperator : BDDataBuilderBaseOperator

- (void)executeNavToOperationWithInfo:(id)a0 dataInfo:(id)a1 isForward:(BOOL)a2;
- (void)executeSetKVOperationWithInfo:(id)a0 dataInfo:(id)a1 isForward:(BOOL)a2;
- (void)executeMergeDictOperationWithInfo:(id)a0 dataInfo:(id)a1 isForward:(BOOL)a2;
- (void)executeMergeJsonObjStrOperationWithInfo:(id)a0 dataInfo:(id)a1 isForward:(BOOL)a2;
- (void)executeRemoveKeyOperationWithInfo:(id)a0 dataInfo:(id)a1 isForward:(BOOL)a2;
- (id)getParentNodeOutputDict;

@end
