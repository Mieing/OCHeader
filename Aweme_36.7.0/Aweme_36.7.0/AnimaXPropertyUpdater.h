@interface AnimaXPropertyUpdater : NSObject {
    struct weak_ptr<lynx::animax::AnimaXPlayer> { struct AnimaXPlayer *__ptr_; struct __shared_weak_count *__cntrl_; } _playerWeakPtr;
}

- (void)updateLayerProperty:(id)a0 propertyType:(unsigned long long)a1 value:(id)a2 callback:(id)a3;
- (void)updateResourceProperty:(id)a0 propertyType:(unsigned long long)a1 value:(id)a2 callback:(id)a3;
- (void)addLayerPropertyCallback:(unsigned long long)a0 keyPath:(id)a1 valueCallback:(id)a2 callback:(id)a3;
- (void)getKeysForKeyPath:(id)a0 callback:(id)a1;
- (BOOL)validateLayerPropertyInputs:(id)a0 value:(id)a1 callback:(id)a2;
- (struct PropertyUpdater { void /* function */ **x0; } *)getPropertyUpdater;
- (void)callError:(id)a0 withMessage:(id)a1;
- (struct function<void (const lynx::animax::PropertyUpdateResponse &)> { struct __value_func<void (const lynx::animax::PropertyUpdateResponse &)> { union type { unsigned char x0[24]; } x0; void *x1; } x0; })createNativeCallback:(id)a0;
- (BOOL)validateResourcePropertyInputs:(id)a0 value:(id)a1 callback:(id)a2;
- (BOOL)validateCallbackInputs:(id)a0 valueCallback:(id)a1 callback:(id)a2;
- (void)handlePropertyCallback:(id)a0 response:(const void *)a1;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithPlayer:(void *)a0;

@end
