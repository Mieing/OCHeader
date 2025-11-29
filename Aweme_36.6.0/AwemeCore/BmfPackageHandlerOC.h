@class NSString;

@interface BmfPackageHandlerOC : NSObject <IBmfPackageHandlerOC> {
    void *handler_ptr;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)get_alg_status;
- (int)get_alg_instance_id;
- (int)disable_alg:(int)a0;
- (void)release_package;
- (int)get_info:(id)a0;
- (int)get_handler_alg_create_count;
- (int)enable_alg_async:(id)a0;
- (int)set_current_thread_global_device_context;
- (int)enable_alg:(id)a0;
- (int)process:(id)a0 in_param:(id)a1 output_video_frame:(id)a2 output_param:(id)a3;
- (int)unref_video_frame:(id)a0;
- (int)init:(id)a0;
- (id)init;
- (void)dealloc;

@end
