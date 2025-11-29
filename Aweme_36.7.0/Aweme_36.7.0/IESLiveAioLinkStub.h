@class NSMutableDictionary;

@interface IESLiveAioLinkStub : NSObject

@property (retain, nonatomic) NSMutableDictionary *channels;

+ (id)shareInstace;

- (void)sendReturnDataToLynx:(id)a0 error:(id)a1 tag:(id)a2 closeChannel:(BOOL)a3;
- (void)removeChannelWithTag:(id)a0 reason:(unsigned long long)a1 diContext:(id)a2;
- (id)getChannelView:(id)a0;
- (void)registerLynxService:(id)a0 withView:(id)a1 diContext:(id)a2;
- (void)registerNativeService:(id)a0 withMonitorView:(id)a1 diContext:(id)a2;
- (void)receiveLynxData:(id)a0;
- (void)receiveLynxData:(id)a0 params:(id)a1 error:(id)a2 diContext:(id)a3;
- (void)processCloseChannel:(id)a0 flag:(unsigned long long)a1 diContext:(id)a2;
- (void)newCallLynxService:(id)a0 method:(id)a1 tag:(id)a2 view:(id)a3 params:(id)a4 error:(id)a5;
- (void)callLynxService:(id)a0 method:(id)a1 tag:(id)a2 view:(id)a3 params:(id)a4 error:(id)a5;
- (id)getChannelVersion:(id)a0;
- (id)createCallLynxParams:(id)a0 method:(id)a1 tag:(id)a2 service:(id)a3 error:(id)a4;
- (void).cxx_destruct;
- (id)init;

@end
