@class MTLTextureDescriptor, VFMetalContext;
@protocol MTLComputePipelineState;

@interface PreTransform : NSObject {
    int compile_width;
    int compile_height;
    int need_change_range;
}

@property (retain, nonatomic) MTLTextureDescriptor *descriptor;
@property (retain, nonatomic) VFMetalContext *context;
@property (retain, nonatomic) id<MTLComputePipelineState> pipeline;

- (void)Release;
- (id)initWithParam:(int)a0 height:(int)a1 need_rerange:(int)a2 context:(id)a3;
- (id)Transform:(id)a0 need_color_trans:(int)a1;
- (void).cxx_destruct;

@end
