@class NSString, NSFileHandle, NSPipe;

@interface HMDLogRedirector : NSObject

@property (nonatomic) int originalStd;
@property (nonatomic) int stdFd;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } log_mutex;
@property (copy, nonatomic) NSString *tag;
@property (retain) NSPipe *pipe;
@property (retain) NSFileHandle *readHandle;
@property (copy, nonatomic) id /* block */ callback;

- (id)initWithOriginalStd:(int)a0 AndTag:(id)a1;
- (void)redirectNotificationHandle:(id)a0;
- (void)redirectToAlog:(BOOL)a0 withCallback:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
