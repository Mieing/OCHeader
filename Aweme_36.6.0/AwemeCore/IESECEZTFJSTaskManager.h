@class NSArray, JsWorkerIOS, NSObject;
@protocol OS_dispatch_queue;

@interface IESECEZTFJSTaskManager : NSObject {
    JsWorkerIOS *_worker;
    NSArray *_taskGroupList;
    NSObject<OS_dispatch_queue> *_taskQueue;
}

- (void)loadJS;
- (id)initWithWorker:(id)a0 tasks:(id)a1;
- (void).cxx_destruct;

@end
