@class IESLiveLinkFrame, NSString;
@protocol IESLiveLinkSafeMutableArrayProtocol;

@interface IESLiveLinkOutputNode : IESLiveLinkBaseNode <IESLiveLinkOutputNode>

@property (retain, nonatomic) IESLiveLinkFrame *frameForOutput;
@property (retain, nonatomic) id<IESLiveLinkSafeMutableArrayProtocol> internalTargets;
@property (retain, nonatomic) id<IESLiveLinkSafeMutableArrayProtocol> internalTargetTextureIndices;
@property (copy, nonatomic) id /* block */ processingCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setInputFramebufferForTarget:(id)a0 atIndex:(long long)a1;
- (void)removeAllTargets;
- (id)targetTextureIndices;
- (int)expectedFrameIndex;
- (void)addTarget:(id)a0 atFrameLocation:(long long)a1;
- (void)removeOutputFrame;
- (void)removeAllTargetsForce;
- (void)notifyTargetsAboutNewOutputFrame;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)targets;
- (void)dealloc;
- (void)addTarget:(id)a0;
- (void)removeTarget:(id)a0;

@end
