@interface OMCASRProcessor : NSObject {
    struct SharedPtr<XMFASRProcessor> { struct XMFASRProcessor *_ptr; } _backingProcessor;
}

- (id)init;
- (BOOL)initResourcesWithConfigFilePath:(id)a0 modelFilePath:(id)a1 cmsFilePath:(id)a2;
- (void)releaseResources;
- (BOOL)isResourcesReady;
- (id)processWithPCMData:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
