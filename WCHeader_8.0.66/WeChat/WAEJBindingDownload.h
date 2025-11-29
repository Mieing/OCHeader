@class NSString;

@interface WAEJBindingDownload : WAEJBindingEventedBase {
    NSString *taskId;
    unsigned int workerId;
}

+ (void *)_ptr_to_func_start;
+ (void *)_ptr_to_func_abort;
+ (void *)_ptr_to_get_onheader;
+ (void *)_ptr_to_set_onheader;
+ (void *)_ptr_to_get_onprogress;
+ (void *)_ptr_to_set_onprogress;
+ (void *)_ptr_to_get_onsuccess;
+ (void *)_ptr_to_set_onsuccess;
+ (void *)_ptr_to_get_onfail;
+ (void *)_ptr_to_set_onfail;

- (id)initWithContext:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2;
- (struct OpaqueJSValue { } *)_func_start:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (struct OpaqueJSValue { } *)_func_abort:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (void)onProgress:(float)a0 written:(long long)a1 total:(long long)a2;
- (void)onHeaderReceived:(id)a0;
- (void)onDownloadComplete:(id)a0 filePath:(id)a1 status:(unsigned long long)a2 dataLength:(long long)a3 profile:(id)a4;
- (void)onDownloadError:(id)a0 errNo:(id)a1;

@end
