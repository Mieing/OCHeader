@class NSString;

@interface LVPreprocessSession : NSObject <LVPreprocessSession> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _stateLock;
}

@property (copy, nonatomic) id /* block */ progressHandler;
@property (nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)excuteNLETemplateWithCallback:(id /* block */)a0;
- (void)excuteWithCallback:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (id)taskID;
- (void)dealloc;
- (void)cancel;

@end
