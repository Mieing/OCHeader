@class NSError, BDDataBuilderBaseNode, BDDataBuilderNodeTree;

@interface BDDataBuilderInternal : NSObject

@property (retain, nonatomic) id sourceData;
@property (nonatomic) unsigned long long sourceType;
@property (retain, nonatomic) BDDataBuilderNodeTree *nodeTree;
@property (readonly, nonatomic) BDDataBuilderBaseNode *rootNode;
@property (retain, nonatomic) NSError *buildError;
@property (nonatomic) id *externalErrorPtr;

- (void)executeTraverseStopAt:(id)a0;
- (id)initWithSourceData:(id)a0 type:(unsigned long long)a1 rootNode:(id)a2;
- (void).cxx_destruct;

@end
