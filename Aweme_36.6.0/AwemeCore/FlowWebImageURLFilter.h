@interface FlowWebImageURLFilter : BDWebImageURLFilter

- (id)identifierWithURL:(id)a0;
- (BOOL)enableCacheOptimize;
- (BOOL)isExternalURL:(id)a0;
- (BOOL)isBase64URL:(id)a0;
- (id)getImageCacheConfig;
- (BOOL)hostInWhiteList:(id)a0;
- (id)hostWhiteList;

@end
