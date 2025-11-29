@class NSString;

@interface BDREGraphNodeBuilder : NSObject <BDREGraphNodeBuilderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)buildNodeWithGraph:(id)a0 treeNode:(id)a1 index:(long long)a2;
- (id)innerBuildNodeWithGraph:(id)a0 treeNode:(id)a1 index:(long long)a2;
- (BOOL)buildBasicCheckWithOpName:(id)a0 treeNode:(id)a1;

@end
