@class NSMutableDictionary, NSTimer, NSString, NSObject;
@protocol IESLiveIMUnifiedClientDelegate;

@interface IESLiveIMUnifiedClientWrapper : IESLiveIMClientWrapper

@property (retain, nonatomic) NSMutableDictionary *paramsDicWithHTTP;
@property (retain, nonatomic) NSMutableDictionary *paramsDicRegistering;
@property (retain, nonatomic) NSMutableDictionary *paramsDicWithWS;
@property (retain, nonatomic) NSTimer *wrapperStateCheckTimer;
@property (retain, nonatomic) NSMutableDictionary *registerMap;
@property (nonatomic) BOOL needHttpFetching;
@property (nonatomic) double unusedTime;
@property (retain, nonatomic) NSString *umgwGlobalExt;
@property (weak, nonatomic) NSObject<IESLiveIMUnifiedClientDelegate> *delegate;

- (void)setupWithConfig:(id)a0;
- (void)channel:(id)a0 opened:(id)a1;
- (void)channel:(id)a0 transportChanged:(id)a1;
- (void)channel:(id)a0 closed:(id)a1;
- (void)channel:(id)a0 received:(id)a1;
- (id)assembleHttpFetcherParams:(id)a0;
- (id)assembleHttpHeaders:(id)a0;
- (id)httpBodyField;
- (id)assembleWsFetcherHeaders:(id)a0;
- (id)assembleWsFetcherParams:(id)a0;
- (void)setupWsFetcherWithConfig:(id)a0;
- (void)registerBusiness:(long long)a0 params:(id)a1;
- (void)unregisterBusiness:(long long)a0 params:(id)a1;
- (id)assembleWsRegisterdToken;
- (void)asyncSendRegisterPacket:(BOOL)a0 With:(long long)a1 params:(id)a2;
- (id)p_createAndSaveRegisterModelWith:(BOOL)a0 token:(long long)a1;
- (id)p_createUnlinkPacketWith:(id)a0 params:(id)a1;
- (void)startWrapperStateCheckTimer;
- (void)stopWrapperStateCheckTimer;
- (void)p_handleRegisterBackMessage:(id)a0;
- (void)p_updateParams:(id)a0 fromPacket:(id)a1;
- (void)trackBizRegisterSucceed:(BOOL)a0 model:(id)a1 params:(id)a2;
- (void)doWrapperStateCheck;
- (void)doRegisterTimetoutCheck;
- (void)doHttpFetchAndRegisterCheck;
- (void)doWrapperUseStateCheck;
- (void)reconnect;
- (void).cxx_destruct;
- (void)stop;
- (void)start;

@end
