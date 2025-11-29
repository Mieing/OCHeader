@class NSMutableDictionary;

@interface VideoPreloadReporter : MMObject {
    NSMutableDictionary *m_dict;
}

- (void)reset;
- (id)init;
- (void)onPreloadTaskCreate:(id)a0 data:(id)a1;
- (void)onPreloadTaskComplete:(id)a0 preloadDuration:(unsigned int)a1 preloadDataSize:(unsigned int)a2 preloadVideoSize:(unsigned int)a3;
- (void)doReport:(id)a0;
- (void).cxx_destruct;

@end
