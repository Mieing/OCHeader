@interface AWEPostPageVideoCutAnchorRetouchLogic : AWEPostPageVideoCutAnchorProductLogic

+ (id)openPlatformKey;
+ (BOOL)isFromShare:(id)a0;
+ (id)anchorImageName;
+ (BOOL)checkConsistencyWithUploadInfo:(id)a0;
+ (BOOL)switchDisabled;
+ (id)productIdentifier;

- (id)defaultAnchorTitle;
- (BOOL)canRequestShareId;
- (void)doFetchShareIdWithCompletion:(id /* block */)a0;
- (void)onAnchorViewDidLoad;

@end
