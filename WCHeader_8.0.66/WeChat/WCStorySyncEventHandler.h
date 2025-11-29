@interface WCStorySyncEventHandler : ProtobufEventHandler

- (void)OnProtocolResponse:(id)a0 shouldContinue:(BOOL *)a1;
- (void)syncStoryCommentToLocal:(id)a0;

@end
