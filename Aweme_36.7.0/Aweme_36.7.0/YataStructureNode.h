@class YataRenderNode, NSString, YataNodeInfoData, YataSettingsHelper, YataRenderData;
@protocol YataInstanceInnerInterface;

@interface YataStructureNode : YataAbstractNode {
    NSString *_key;
}

@property (weak, nonatomic) id<YataInstanceInnerInterface> instance;
@property (weak, nonatomic) YataSettingsHelper *settings;
@property (retain, nonatomic) YataNodeInfoData *nodeInfo;
@property (retain, nonatomic) YataRenderNode *renderNode;
@property (readonly, nonatomic) YataRenderData *renderData;

- (void)updateChildren;
- (void)updateNode:(id)a0;
- (void)unmount;
- (BOOL)isLeafRenderNode;
- (id)initWithProtocolData:(id)a0 key:(id)a1 yataInstance:(id)a2 index:(long long)a3;
- (id)_initWithProtocolData:(id)a0 key:(id)a1 yataInstance:(id)a2 index:(long long)a3;
- (void)createRenderObject;
- (void)createStructNodeWithKey:(id)a0 containChildren:(BOOL)a1 index:(long long)a2;
- (void)updateRenderObject;
- (void)dfsUpdateChildren;
- (void)validateNodeData;
- (void)registerLifeCycleToEventCenter;
- (void)updateChildren:(id)a0 newKeys:(id)a1;
- (void)updateNodeIndex:(long long)a0;
- (void)mount:(id)a0;
- (void)reportErrorCode:(unsigned long long)a0 detail:(id)a1 nodeName:(id)a2 extra:(id)a3;
- (void)checkNodeContainer:(id)a0 extraParams:(id)a1 nodeName:(id)a2;
- (void)checkNodeFeature:(id)a0 extraParams:(id)a1 nodeName:(id)a2;
- (void)reportEmptyFields:(id)a0;
- (void)reportEmptyEvents:(id)a0;
- (void)registerAfterRenderToEventCenter;
- (void)registerBranchNodeAutoExposure;
- (void)unmountChild:(id)a0;
- (void)createChildren;
- (id)key;
- (void).cxx_destruct;
- (void)setKey:(id)a0;
- (BOOL)isLeafNode;

@end
