@class NSString, NSMutableDictionary;

@interface IESLiveSixDoFServiceImpl : NSObject <IESLiveSixDoFService>

@property (retain, nonatomic) NSMutableDictionary *originFileDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createWithVrInfo:(id)a0 roomId:(id)a1 room:(id)a2 player:(id)a3 trackDict:(id)a4;
- (void)setEffectEnable:(BOOL)a0 player:(id)a1 roomid:(id)a2 dof:(long long)a3 layout:(id)a4;
- (void)checkCutWithStreamData:(id)a0 qualitySdkKey:(id)a1 player:(id)a2 roomid:(id)a3 callTrace:(id)a4;
- (void)initSetupBlock:(id /* block */)a0 player:(id)a1;
- (void)initDownloadBlock:(id /* block */)a0 player:(id)a1;
- (void)appendEffectWithID:(long long)a0 player:(id)a1 completion:(id /* block */)a2;
- (void)removeEffectWithID:(long long)a0 player:(id)a1;
- (id)getArrayByStringDic:(id)a0;
- (id)getArrayByInt64Dic:(id)a0;
- (id)transformByInt64Dic:(id)a0;
- (void)sendLayerChangeToPlayer:(id)a0 roomId:(id)a1 layerStatus:(id)a2 type:(long long)a3;
- (id)transformLayout:(id)a0;
- (void)realDownLoadWithMaterialId:(long long)a0 player:(id)a1 completion:(id /* block */)a2;
- (void)removeEffectWithPath:(id)a0 player:(id)a1;
- (void)downloadByID:(long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
