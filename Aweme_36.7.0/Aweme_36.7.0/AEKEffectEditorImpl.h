@class NSArray, NSString;
@protocol AEKEffectOperator;

@interface AEKEffectEditorImpl : AEKBaseRenderEditor <AEKEffectEditor>

@property (readonly, nonatomic) NSArray *effects;
@property (readonly, nonatomic) id<AEKEffectOperator> firstOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)syncSpecialEffectTrackToTotalDuration;
- (id)effectWithID:(id)a0;
- (id)effectImpls;
- (id)addEffectWithResource:(id)a0;
- (BOOL)hasEffectUsingUmpire:(id /* block */)a0;
- (id)batch:(id /* block */)a0;

@end
