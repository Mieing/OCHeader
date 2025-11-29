@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface WAJSEventHandler_detectImageCode : WAJSEventHandler_BaseEvent {
    NSMutableArray *_detectResults;
    NSObject<OS_dispatch_queue> *_getA8KeyQueue;
}

- (void)handleJSEvent:(id)a0;
- (void)batchGetA8KeyForResults:(id)a0;
- (void)checkGetA8KeyFinish;
- (id)getImageGrayDataWithUrl:(id)a0 size:(struct CGSize { double x0; double x1; } *)a1;
- (BOOL)scanImage:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 codeType:(long long)a2 outResults:(id)a3;
- (id)convertQBarInfo2Result:(const void *)a0;
- (void).cxx_destruct;

@end
