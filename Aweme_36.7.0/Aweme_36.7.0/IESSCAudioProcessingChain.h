@class NSArray, NSString;

@interface IESSCAudioProcessingChain : NSObject <NSCopying, IESSCAudioProcessingNode>

@property (copy, nonatomic) NSArray *nodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applyEffectToBufferListInOut:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 renderInfo:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
