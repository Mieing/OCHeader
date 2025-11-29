@class NSObject;
@protocol OS_dispatch_queue;

@interface BDByteCastPortProber : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)initWithContextId:(id)a0;
- (void)checkStateOfTCPPort:(long long)a0 forIP:(id)a1 withCompletion:(id /* block */)a2;
- (BOOL)isTCPPortOpen:(long long)a0 forIP:(id)a1 error:(id *)a2;
- (BOOL)isUDPPortOpen:(long long)a0 forIP:(id)a1;
- (void)checkStateOfUDPPort:(long long)a0 forIP:(id)a1 withCompletion:(id /* block */)a2;
- (void).cxx_destruct;

@end
