@interface BachIOSDownloadbleResourceFinder : BachIOSResourceFinder

@property void *nativeListener;

- (void)downloadModels:(id)a0 callback:(id)a1;
- (void)destroy;
- (id)initWithConfig:(id)a0;

@end
