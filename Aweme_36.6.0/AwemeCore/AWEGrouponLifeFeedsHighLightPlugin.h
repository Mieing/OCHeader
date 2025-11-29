@interface AWEGrouponLifeFeedsHighLightPlugin : AWEGrouponLifeFeedsBasePlugin

@property (nonatomic) BOOL highLightShowing;

- (id)fetchComponentHighLightFromComponentView:(id)a0;
- (void)highLightComponent:(id)a0 config:(id)a1;
- (void)highLightComponentsIfNeed;

@end
