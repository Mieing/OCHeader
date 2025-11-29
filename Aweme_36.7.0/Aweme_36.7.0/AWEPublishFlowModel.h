@class NSMutableDictionary, NSString, AWEPublishFlowRepoTaskModel, AWEPublishFlowRepoContextModel;

@interface AWEPublishFlowModel : MTLModel <NSCopying, MTLJSONSerializing>

@property (readonly, nonatomic) AWEPublishFlowRepoContextModel *repoContext;
@property (readonly, nonatomic) AWEPublishFlowRepoTaskModel *repoTask;
@property (retain, nonatomic) NSMutableDictionary *extensionModels;
@property (copy, nonatomic) NSString *flowId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)retriveTaskInfoToFlowModel:(id)a0;
+ (BOOL)cacheTaskInfo:(id)a0;
+ (BOOL)invalidateCacheTaskInfo:(id)a0;

- (BOOL)setExtensionModelByClass:(id)a0;
- (id)extensionModelOfClass:(Class)a0;
- (void)removeExtensionModel:(Class)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
