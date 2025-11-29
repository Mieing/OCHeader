@class IESLLTempoWeakValueMap, NSDictionary, IESLLTempoNode;

@interface IESLLTempoOpenTree : NSObject

@property (retain, nonatomic) IESLLTempoWeakValueMap *idSelectorMap;
@property (retain, nonatomic) IESLLTempoWeakValueMap *componentMap;
@property (retain, nonatomic) IESLLTempoNode *rootNode;
@property (copy, nonatomic) NSDictionary *globalProps;

- (id)findNodeByIdSelector:(id)a0;
- (id)findComponentNodeByComponentID:(id)a0;
- (void).cxx_destruct;

@end
