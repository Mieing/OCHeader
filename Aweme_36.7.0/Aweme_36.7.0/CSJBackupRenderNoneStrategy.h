@interface CSJBackupRenderNoneStrategy : CSJBackupRenderStrategy

- (void)render_really;
- (id)logKeyName;
- (long long)renderType;
- (void)render;

@end
