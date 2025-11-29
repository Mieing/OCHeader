@interface IESLiveInteractDynamicLayerElementJSBHandler : IESLiveInteractDynamicJSBHandler

- (id)containerViewForLayer:(id)a0;
- (void)handleLayerElementJSBParams:(id)a0 context:(id)a1;
- (void)insertLayerElement:(id)a0 extra:(id)a1 context:(id)a2;
- (void)removeLayerElement:(id)a0 extra:(id)a1 context:(id)a2;
- (void)updateLayerElement:(id)a0 extra:(id)a1 context:(id)a2;
- (id)jsb_update_layer_element:(id)a0 context:(id)a1;

@end
