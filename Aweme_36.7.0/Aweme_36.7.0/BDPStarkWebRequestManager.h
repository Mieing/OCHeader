@class NSMutableDictionary, NSRecursiveLock;

@interface BDPStarkWebRequestManager : NSObject {
    NSRecursiveLock *_taskLock;
}

@property (nonatomic) long long lastestTaskID;
@property (retain, nonatomic) NSMutableDictionary *taskIdMapTask;

+ (id)shareManager;

- (void)request:(id)a0 completionHandler:(id /* block */)a1 headers:(id)a2;
- (void).cxx_destruct;

@end
