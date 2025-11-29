@class NSString, IESLiveIMPaaSWorker;

@interface IESECLiveIMPaaSWorkerDouyin : NSObject <IESECLiveIMPaaSWorker>

@property (retain, nonatomic) IESLiveIMPaaSWorker *worker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wrapperWithWorker:(id)a0;

- (void)reconnect;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)dealloc;

@end
