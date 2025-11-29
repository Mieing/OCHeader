@class WAEJBindingGfx;

@interface WAEJObjClass : NSObject <ObjClassProtocol> {
    WAEJBindingGfx *gfx_;
}

- (void)dealloc;
- (struct _sg_state_t { } *)get_sg_state:(void *)a0;
- (unsigned int)get_gfx_object_id:(void *)a0;
- (void)setCurrentContext:(void *)a0;
- (void)setRenderingContextDirty;
- (void)makeRenderingContext;

@end
