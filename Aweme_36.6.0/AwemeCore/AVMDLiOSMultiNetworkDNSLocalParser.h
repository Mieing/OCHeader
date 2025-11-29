@class NSString, NSError, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AVMDLiOSMultiNetworkDNSLocalParser : NSObject <AVMDLiOSDNSProtocol> {
    struct AVMDHandler { int mMsgPipe[2]; struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } mMutex; } handler;
}

@property (copy, nonatomic) NSString *hostname;
@property (nonatomic) double timeout;
@property (nonatomic) long long maxCount;
@property (nonatomic) BOOL isUserCancel;
@property (nonatomic) BOOL isCancelled;
@property (copy, nonatomic) id /* block */ result;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dnsQueue;
@property (nonatomic) unsigned int netInterfaceIndex;
@property (nonatomic) unsigned int reply_flags;
@property (retain, nonatomic) NSMutableArray *addressList;
@property (nonatomic) int *msgPipe;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)parseDNS;
- (void)notifyError:(id)a0;
- (void)notifySuccess:(id)a0;
- (id)parseResult:(id)a0;
- (void)_resetInitialStates;
- (id)initWithHost:(id)a0 networkIndex:(unsigned int)a1;
- (void)parseDNSWithAutorelease;
- (BOOL)cancelled;
- (void)start:(id /* block */)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)host;
- (id)initWithHost:(id)a0;
- (void)dealloc;
- (void)cancel;
- (long long)parserType;

@end
