@class IESLiveLinkFrame, NSString;

@interface IESLiveLinkFilterNode : IESLiveLinkOutputNode <IESLiveLinkInputNode>

@property (retain, nonatomic) IESLiveLinkFrame *firstInputFrame;
@property (nonatomic) struct CGSize { double width; double height; } firstInputFrameSize;
@property (nonatomic) BOOL isEndProcessing;
@property (nonatomic) BOOL shouldIgnoreUpdatesToThisTarget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)informTargetsAboutNewFrameAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)endProcessing;
- (struct CGSize { double x0; double x1; })outputFrameSize;
- (void)setInputFramebuffer:(id)a0 atIndex:(long long)a1 extra:(id)a2;
- (void)setInputSize:(struct CGSize { double x0; double x1; })a0 atIndex:(long long)a1 extra:(id)a2;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1 extra:(id)a2;
- (long long)nextAvailableFrameIndex;
- (BOOL)ignoreRemoveAllTargets;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;

@end
