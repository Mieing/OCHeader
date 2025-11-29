@class NSString, NSMutableDictionary;

@interface AWEIMFacePuzzleSendMessageObserver : NSObject <IESIMMessageSenderDelegate>

@property (retain, nonatomic) NSMutableDictionary *tasks;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } mutex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)iesim_didReceiveSendMessageResponse:(id)a0;
- (void)iesim_didReceiveAsyncSendMessageResponse:(id)a0;
- (void)addTaskID:(id)a0 task:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
