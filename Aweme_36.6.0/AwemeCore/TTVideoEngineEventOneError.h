@class TTVideoEngineEventBase, NSString;

@interface TTVideoEngineEventOneError : NSObject <TTVideoEngineEventOneErrorProtocol>

@property (retain, nonatomic) TTVideoEngineEventBase *eventBase;
@property (nonatomic) long long errorType;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *errorStage;
@property (nonatomic) BOOL isFirstFrameShown;
@property (nonatomic) long long retryCount;
@property (nonatomic) long long vsc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendErrorEvent;
- (void)showedFirstFrame;
- (void)errorHappened:(id)a0;
- (void)errorStatusHappened:(long long)a0;
- (void)moviePlayRetryWithError:(id)a0 strategy:(long long)a1 apiver:(unsigned long long)a2;
- (id)initWithEventBase:(id)a0;
- (id)jsonDict;
- (void).cxx_destruct;

@end
