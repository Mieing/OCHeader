@class NSString;

@interface IESSoloKTVVEAudioEffectFilter : NSObject <IESSCAudioProcessingNode> {
    void *effectFilter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateEffectPath:(id)a0;
- (void)applyEffectToBufferListInOut:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 renderInfo:(id)a1;
- (void)resetEffectStatus;
- (id)init;
- (void)dealloc;

@end
