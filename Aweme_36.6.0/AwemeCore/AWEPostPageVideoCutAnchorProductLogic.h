@class NSDictionary, AWEVideoPublishViewModel;

@interface AWEPostPageVideoCutAnchorProductLogic : NSObject

@property (retain, nonatomic) AWEVideoPublishViewModel *model;
@property (retain, nonatomic) NSDictionary *originalSourceInfo;
@property (nonatomic) BOOL shareIdRequesting;

+ (id)openPlatformKey;
+ (BOOL)isVideoCutAnchorWithAnchorID:(id)a0 type:(id)a1;
+ (id)defaultAnchorImageNameWithAnchorID:(id)a0 type:(id)a1;
+ (BOOL)isFromShare:(id)a0;
+ (id)anchorImageName;
+ (BOOL)checkConsistencyWithUploadInfo:(id)a0;
+ (BOOL)standardAnchorEnabled;
+ (BOOL)switchDisabled;
+ (BOOL)isConsistentWithModel:(id)a0;
+ (BOOL)checkIsProduct:(id)a0;
+ (BOOL)isVideoCutAnchor:(id)a0;
+ (id)createFromModel:(id)a0 designatedOpenPlatformKey:(id)a1;
+ (BOOL)isProductFromVideocut:(id)a0;
+ (BOOL)isProductFromVideocutWithSourceInfoDict:(id)a0;
+ (id)productIdentifier;

- (id)contextModel;
- (id)anchorContent;
- (long long)anchorBusinessType;
- (id)openShareModel;
- (id)uploadInfoModel;
- (id)defaultAnchorTitle;
- (BOOL)canRequestShareId;
- (void)doFetchShareIdWithCompletion:(id /* block */)a0;
- (id)anchorIdWithShareIdInfo:(id)a0;
- (id)anchorTitleWithShareIdInfo:(id)a0;
- (id)productTypeDescription;
- (BOOL)matchesOpenPlatformKey:(id)a0;
- (void)onAnchorViewDidLoad;
- (id)buildAnchorViewModelWithShareIdInfo:(id)a0;
- (void)fetchShareIdIfNeededWithSuccessBlock:(id /* block */)a0;
- (void)resetOriginalSourceInfo:(id)a0;
- (id)publishConfigModel;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)shareModel;

@end
