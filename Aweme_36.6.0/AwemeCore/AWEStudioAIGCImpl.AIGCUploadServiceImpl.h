@interface AWEStudioAIGCImpl.AIGCUploadServiceImpl : HTSService <AWEStudioAIGCUploadResourcesTaskServiceProtocol> {
    void /* unknown type, empty encoding */ schedulerMapLock;
    void /* unknown type, empty encoding */ schedulerMap;
}

- (id)startUploadResourceWithInput:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
- (void)cancelUploadTasksWithTaskIds:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
