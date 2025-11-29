@interface AWEPostPageVideoCutAnchorDreaminaLogic : AWEPostPageVideoCutAnchorProductLogic

+ (id)openPlatformKey;
+ (BOOL)isFromShare:(id)a0;
+ (id)anchorImageName;
+ (BOOL)checkConsistencyWithUploadInfo:(id)a0;
+ (id)productIdentifier;

- (id)defaultAnchorTitle;
- (BOOL)canRequestShareId;
- (void)doFetchShareIdWithCompletion:(id /* block */)a0;

@end
