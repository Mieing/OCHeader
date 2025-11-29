@class NSArray, NSString;
@protocol AEKAudioOperator;

@interface AEKAudioEditorImpl : AEKBaseRenderEditor <AEKAudioEditor>

@property (retain, nonatomic) NSArray *audioImpls;
@property (readonly, copy, nonatomic) NSArray *audios;
@property (readonly, nonatomic) id<AEKAudioOperator> bgmAudio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)applyStashes:(id)a0;
- (id)stashAudioWithFilter:(id /* block */)a0 isRemove:(BOOL)a1;
- (id)audioWithId:(id)a0;
- (id)audioWithFilterBlock:(id /* block */)a0;
- (id)addAudioWithResource:(id)a0;
- (id)audioWithClipId:(id)a0;
- (id)addAudioWithAudioClip:(id)a0 needClone:(BOOL)a1;
- (id)stashAudioWithFilter:(id /* block */)a0;
- (void).cxx_destruct;
- (id)batch:(id /* block */)a0;

@end
