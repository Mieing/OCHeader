@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface GACAppCheckTimer : NSObject <GACAppCheckTimerProtocol>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) NSObject<OS_dispatch_source> *timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)timerFireDate:(id)a0 dispatchQueue:(id)a1 block:(id /* block */)a2;
+ (id /* block */)timerProvider;

@end
