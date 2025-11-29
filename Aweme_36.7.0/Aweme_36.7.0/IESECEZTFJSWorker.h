@class NSString, JsWorkerIOS, IESECEZTFJSTaskManager, IESECEZTFQuality;

@interface IESECEZTFJSWorker : NSObject <MessageCallback, ErrorCallback> {
    JsWorkerIOS *_worker;
    BOOL _eztfJSAvailable;
    IESECEZTFJSTaskManager *_taskManager;
    IESECEZTFQuality *_qualityInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createEZTFJSWorker;
- (id)initWithURLList:(id)a0 quality:(id)a1;
- (void)excuteJSMethodWithType:(id)a0 data:(id)a1 completion:(id /* block */)a2 invokeQuality:(id)a3;
- (BOOL)eztfJSAvailable;
- (void)handleMessage:(id)a0;
- (void).cxx_destruct;
- (void)handleError:(id)a0;

@end
