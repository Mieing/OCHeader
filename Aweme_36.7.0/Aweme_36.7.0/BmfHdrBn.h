@class NSString;

@interface BmfHdrBn : NSObject <IBmfHdrBn> {
    float cvt_matrix_[9];
    float cvt_offset_[3];
}

@property void *instance_;
@property struct MetalRuntime { struct MetalRuntimeImpl *x0; } *metal_runtime_;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
