@class NSThread, HMDLogRedirector;

@interface HMDLogHelper : NSObject

@property (retain, nonatomic) HMDLogRedirector *nslogRedirector;
@property (retain, nonatomic) HMDLogRedirector *printfRedirector;
@property (retain, nonatomic) NSThread *thread;

+ (id)sharedInstance;

- (void)startRunloop;
- (void)setRedirectNSLogToAlogEnable:(BOOL)a0 withCallback:(id /* block */)a1;
- (void)setRedirectPrintfToAlogEnable:(BOOL)a0 withCallback:(id /* block */)a1;
- (void)setRedirectNSLogToAlogEnable:(BOOL)a0;
- (void)setRedirectPrintfToAlogEnable:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end
