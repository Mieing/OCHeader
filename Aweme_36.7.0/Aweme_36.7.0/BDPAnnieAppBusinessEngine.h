@class NSObject, NSString, BDPUniqueID, BDPMultiDelegateProxy;
@protocol BDPBridgeInstanceProtocol, BDPBusinessEnginePublishProtocol;

@interface BDPAnnieAppBusinessEngine : NSObject <BDPBusinessEngineProtocol>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) NSObject<BDPBridgeInstanceProtocol> *pureLynxInstance;
@property (readonly, nonatomic) BDPMultiDelegateProxy<BDPBusinessEnginePublishProtocol> *publishDelegates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)subscribeHandler:(id)a0 pageID:(long long)a1 dest:(unsigned long long)a2 data:(id)a3 completion:(id /* block */)a4;
- (void)setupPureLynxInstance:(id)a0;
- (void)evaluateScript:(id)a0 pageID:(long long)a1 dest:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)subscribeToAnnieView:(id)a0 data:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithUniqueID:(id)a0;

@end
