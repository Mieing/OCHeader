@interface AWEPostPageVideoCutAnchorLVLogic : AWEPostPageVideoCutAnchorProductLogic

@property (nonatomic) BOOL toolAnchorLocalUploadEnabled;

+ (id)openPlatformKey;
+ (BOOL)isFromShare:(id)a0;
+ (id)anchorImageName;
+ (BOOL)checkConsistencyWithUploadInfo:(id)a0;
+ (BOOL)switchDisabled;
+ (id)productIdentifier;

- (id)resolveJianyingShareIdAnchorExtra;
- (id)defaultAnchorTitle;
- (BOOL)canRequestShareId;
- (void)doFetchShareIdWithCompletion:(id /* block */)a0;
- (id)initWithModel:(id)a0;

@end
