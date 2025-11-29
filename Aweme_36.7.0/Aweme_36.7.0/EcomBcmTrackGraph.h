@class NSMutableDictionary;

@interface EcomBcmTrackGraph : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _managerLock;
}

@property (class, readonly, nonatomic) EcomBcmTrackGraph *shared;

@property (retain, nonatomic) NSMutableDictionary *graphJsonStringMap;
@property (retain, nonatomic) NSMutableDictionary *graphNodesMap;

- (void)mergeingNodesGraphjsonString:(id)a0 forkey:(id)a1;
- (id)getNodeWithIdentifier:(id)a0 inNodes:(id)a1;
- (void)addNode:(id)a0 forNodesMap:(id)a1;
- (id)findNodeWithPageId:(id)a0 inNodes:(id)a1;
- (id)findPreNodeWithPrePageId:(id)a0 node:(id)a1 inNodes:(id)a2;
- (id)checkBcmRawChain:(id)a0 withKey:(id)a1 preItemBlock:(id /* block */)a2;
- (void).cxx_destruct;

@end
