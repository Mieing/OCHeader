@class IESGLEffectFilter;

@interface IESLiveRenderFilterWrapper : NSObject {
    BOOL _enableEffect;
}

@property (retain, nonatomic) IESGLEffectFilter *effectFilter;

- (void)resetEffectMsgListnerBlock:(id /* block */)a0;
- (BOOL)releaseSDK;
- (int)setComposerMode:(int)a0 orderType:(int)a1;
- (int)executeComposerCommand:(unsigned long long)a0 forNodes:(id)a1;
- (int)executeComposerCommand:(unsigned long long)a0 forNodes:(id)a1 withTags:(id)a2;
- (id)getComposerNodePath;
- (int)updateComposerNode:(id)a0 tag:(id)a1 value:(double)a2;
- (void)sendMessage:(unsigned long long)a0 param1:(unsigned long long)a1 param2:(unsigned long long)a2 userInfo:(id)a3;
- (int)setRenderCacheStringValue:(id)a0 jsonStr:(id)a1;
- (void)setEffectABLicense:(id)a0;
- (void)informTargetsAboutNewFrameAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)endProcessing;
- (void)needRender:(BOOL)a0;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1;
- (id)getOutputFrameBuffer;
- (void)setEnableEffect:(BOOL)a0;
- (BOOL)isEffectEnabled;
- (void)setEnableEffect:(BOOL)a0 type:(long long)a1;
- (void *)renderHandle;
- (void)refreshRenderFilterResourceMemory;
- (void)createEffectFilterWithContext:(id)a0;
- (void)createEffectProcessorWithConfig:(id)a0;
- (void)setInputFrameBuffer:(id)a0 atIndex:(long long)a1;
- (void)updateEffectConfig:(id)a0;
- (void).cxx_destruct;
- (void)startProcessing;

@end
