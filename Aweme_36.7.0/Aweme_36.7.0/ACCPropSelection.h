@class PHAsset, IESEffectModel;
@protocol AWEComposerEffectProtocol;

@interface ACCPropSelection : NSObject

@property (retain, nonatomic) IESEffectModel *effect;
@property (retain, nonatomic) IESEffectModel *childEffect;
@property (retain, nonatomic) id<AWEComposerEffectProtocol> composerEffect;
@property (retain, nonatomic) PHAsset *asset;
@property (nonatomic) unsigned long long source;

- (id)initWithEffect:(id)a0 childEffect:(id)a1 source:(unsigned long long)a2;
- (id)initWithEffect:(id)a0 composerEffect:(id)a1 source:(unsigned long long)a2;
- (id)initWithEffect:(id)a0 source:(unsigned long long)a1;
- (id)leafEffect;
- (void).cxx_destruct;

@end
