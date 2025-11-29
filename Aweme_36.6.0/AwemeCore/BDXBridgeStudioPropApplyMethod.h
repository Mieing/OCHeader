@class ACCPropLoadedView;

@interface BDXBridgeStudioPropApplyMethod : BDXBridgeMethod

@property (retain, nonatomic) ACCPropLoadedView *loadingView;
@property (nonatomic) BOOL hasCanceled;

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)repoTrack;
- (id)repoMusic;
- (void)p_showToastWithFetchPropError:(id)a0;
- (void)p_handleCancelDownload;
- (void)downLoadForceBindMusicWithProp:(id)a0 progress:(id /* block */)a1 originMusicFailed:(BOOL)a2 completion:(id /* block */)a3;
- (long long)authType;
- (id)methodName;

@end
