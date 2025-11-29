@interface WAEJBindingGfxNativeBuffer : WAEJBindingGfxObject {
    struct IGfxHandler { void /* function */ **x0; } *gfx_handler_;
    void *buffer_owned_;
}

- (id)initWithHandler:(id)a0 handler:(struct IGfxHandler { void /* function */ **x0; } *)a1;
- (void)InitWithSize:(unsigned int)a0;
- (void)InitWithBuffer:(struct OpaqueJSValue { } *)a0;
- (void)dealloc;
- (void)destroy;

@end
