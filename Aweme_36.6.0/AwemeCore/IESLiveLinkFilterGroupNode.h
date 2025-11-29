@class NSArray, NSString, IESLiveLinkOutputNode, NSMutableArray;
@protocol IESLiveLinkInputNode;

@interface IESLiveLinkFilterGroupNode : IESLiveLinkOutputNode <IESLiveLinkInputNode>

@property (retain, nonatomic) NSMutableArray *filters;
@property (nonatomic) BOOL isEndProcessing;
@property (nonatomic) BOOL shouldIgnoreUpdatesToThisTarget;
@property (retain, nonatomic) IESLiveLinkOutputNode<IESLiveLinkInputNode> *terminalFilter;
@property (retain, nonatomic) NSArray *initialFilters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)endProcessing;
- (void)removeAllTargets;
- (void)setInputFramebuffer:(id)a0 atIndex:(long long)a1 extra:(id)a2;
- (void)setInputSize:(struct CGSize { double x0; double x1; })a0 atIndex:(long long)a1 extra:(id)a2;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1 extra:(id)a2;
- (long long)nextAvailableFrameIndex;
- (BOOL)ignoreRemoveAllTargets;
- (void)addTarget:(id)a0 atFrameLocation:(long long)a1;
- (void)setProcessingCompletion:(id /* block */)a0;
- (id /* block */)processingCompletion;
- (id)filterAtIndex:(unsigned long long)a0;
- (void)addFilter:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (unsigned long long)filterCount;
- (id)targets;
- (void)removeTarget:(id)a0;

@end
