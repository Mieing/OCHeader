@class NSString, AWEUITransitionHost;

@interface AWEVideoRouterMVService : NSObject <AWEStudioMVService>

@property (retain, nonatomic) AWEUITransitionHost *transitionHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEStudioDouyinLiteAdapterClass;

- (id)startMVVideoWithMVID:(id)a0 info:(id)a1;
- (id)aAWEStudioDouyinLiteAdapter;
- (id)startVideoWithMVID:(id)a0 inputData:(id)a1 publishModel:(id)a2 info:(id)a3;
- (id)startMVWithTemplateModel:(id)a0 info:(id)a1;
- (id)p_genRepoPOIFromInfoDic:(id)a0;
- (void)p_decomposeInfoWithMVID:(id)a0 effectModel:(id)a1 info:(id)a2 publishModel:(id)a3;
- (void)p_enterWaterFallStyleMVDetail:(id)a0 publishModel:(id)a1 info:(id)a2;
- (void)p_enterClassicalMVPhotoSelectVC:(id)a0 publishModel:(id)a1;
- (void)p_enterClassicalMVPhotoSelectVCWithTemplateModel:(id)a0 isMediaTemplate:(BOOL)a1 publishModel:(id)a2;
- (void)p_presentSelectPhotoViewController:(id)a0 publishModel:(id)a1;
- (void)p_presentSelectPhotoViewController:(id)a0 isMediaTemplate:(BOOL)a1 publishModel:(id)a2;
- (void).cxx_destruct;

@end
