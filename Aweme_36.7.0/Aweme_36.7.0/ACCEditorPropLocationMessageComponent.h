@class NSString, IESEffectModel;
@protocol ACCEditServiceProtocol;

@interface ACCEditorPropLocationMessageComponent : ACCFeatureComponent <ACCEditPreviewMessageProtocolD, ACCEditorInteractionEffectHandle>

@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) IESEffectModel *lastEffect;
@property (retain, nonatomic) IESEffectModel *currentEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMount;
- (void)componentWillUnmount;
- (void)handleEffectMessage:(id)a0;
- (void)markInteractionEffectInfoWith:(id)a0 videoDuration:(double)a1;
- (void)removeInteractionEffectWith:(id)a0;
- (void).cxx_destruct;

@end
