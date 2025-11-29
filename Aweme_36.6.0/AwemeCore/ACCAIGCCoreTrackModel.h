@class NSCache, NSString;
@protocol ACCRepoDataContext;

@interface ACCAIGCCoreTrackModel : NSObject <ACCAIGCCoreTrackData>

@property (retain, nonatomic) NSCache *weakLokiParamCache;
@property (weak, nonatomic) id<ACCRepoDataContext> repoDataContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)coreAIGCBasicExtraParams;
- (id)getCurrentUseEffectOrTemplateModel;
- (id)aigcTrackType;
- (id)transModelIdFromModel:(id)a0;
- (id)aigcScene;
- (id)subScenceType;
- (id)aigcSource;
- (id)lokiBusinessParam;
- (void).cxx_destruct;

@end
