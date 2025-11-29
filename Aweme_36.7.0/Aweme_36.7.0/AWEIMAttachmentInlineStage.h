@interface AWEIMAttachmentInlineStage : AWEIMStage

- (BOOL)p_shouldGenerateInlinePic;
- (void)p_asyncGenerateHmacSHA256WithInlinePic:(id)a0 complete:(id /* block */)a1;
- (void)p_asyncGenerateInlineDataComplete:(id /* block */)a0;
- (void)start;

@end
