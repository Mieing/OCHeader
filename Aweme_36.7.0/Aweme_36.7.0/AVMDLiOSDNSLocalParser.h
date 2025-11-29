@class NSString, NSError, NSObject;
@protocol OS_dispatch_queue;

@interface AVMDLiOSDNSLocalParser : NSObject <AVMDLiOSDNSProtocol>

@property (copy, nonatomic) NSString *hostname;
@property (nonatomic) double timeout;
@property (nonatomic) long long maxCount;
@property (nonatomic) BOOL isUserCancel;
@property (nonatomic) BOOL isSuccess;
@property (nonatomic) BOOL isCancelled;
@property (nonatomic) BOOL isFinished;
@property (copy, nonatomic) id /* block */ result;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dnsQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)parseDNS;
- (void)notifyError:(id)a0;
- (void)notifySuccess:(id)a0;
- (id)parseResult:(id)a0;
- (void)_resetInitialStates;
- (id)initWithHost:(id)a0 dnsQueue:(id)a1;
- (void)parseDNSWithAutorelease;
- (BOOL)cancelled;
- (void)start:(id /* block */)a0;
- (void).cxx_destruct;
- (id)host;
- (id)initWithHost:(id)a0;
- (void)dealloc;
- (void)cancel;
- (long long)parserType;

@end
