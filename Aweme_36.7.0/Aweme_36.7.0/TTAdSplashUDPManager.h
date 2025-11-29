@class NSMutableDictionary, NSArray, NSString, NSLock, NSObject;
@protocol OS_dispatch_group;

@interface TTAdSplashUDPManager : NSObject <GCDAsyncUdpSocketDelegate> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } requestModelsMutex;
    NSObject<OS_dispatch_group> *reportGroup;
}

@property (retain, nonatomic) NSMutableDictionary *udpConnections;
@property (retain, nonatomic) NSMutableDictionary *requestResults;
@property (retain, nonatomic) NSMutableDictionary *requestModels;
@property (retain, nonatomic) NSLock *dictionaryLock;
@property (retain, nonatomic) NSLock *reportLock;
@property (retain, nonatomic) NSLock *portArrayLock;
@property (retain, nonatomic) NSLock *portAndHostDictLock;
@property (retain, nonatomic) NSLock *udpConnectionsLock;
@property (nonatomic) BOOL shouldUseHttps;
@property (nonatomic) BOOL hasAlreadyReceiveRespnose;
@property (nonatomic) BOOL hotLaunch;
@property (nonatomic) BOOL UDPRequestSuccessfully;
@property (nonatomic) BOOL UDPDecideToShowSplash;
@property (nonatomic) double timestamp;
@property (nonatomic) unsigned long long currentRank;
@property (retain, nonatomic) NSArray *ipList;
@property (copy, nonatomic) id /* block */ finishblock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)udpSocket:(id)a0 didNotConnect:(id)a1;
- (void)udpSocket:(id)a0 didSendDataWithTag:(long long)a1;
- (void)udpSocket:(id)a0 didNotSendDataWithTag:(long long)a1 dueToError:(id)a2;
- (void)udpSocket:(id)a0 didReceiveData:(id)a1 fromAddress:(id)a2 withFilterContext:(id)a3;
- (void)startFetchSwitchCommand:(BOOL)a0;
- (BOOL)shouldShowAdWithUDPResult;
- (void)reportAfter5Seconds;
- (void)doControlOperationIfNeeded:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
