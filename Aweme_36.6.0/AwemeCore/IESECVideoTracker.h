@class NSString, IESECOnceHelper, IESECHybridParamsVerifyHelper;

@interface IESECVideoTracker : NSObject <IESECHybridParamsVerifyCallBackDelegate, IESECVideoTrackerProtocol>

@property (retain, nonatomic) IESECOnceHelper *onceHelper;
@property (retain, nonatomic) IESECHybridParamsVerifyHelper *verifyHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultTracker;

- (void)track:(id)a0 params:(id)a1;
- (void)handleVerifyError:(id)a0;
- (void)handleVerifyMessage:(id)a0;
- (void)trackWithEventBuilder:(id)a0;
- (void)trackWithEventBuilder:(id)a0 onceKey:(id)a1;
- (BOOL)couldTrackWithOnceKey:(id)a0;
- (void)asyncVerifyEventParams:(id)a0 moduleName:(id)a1 scriptMethodName:(id)a2 context:(id)a3;
- (void)track:(id)a0 params:(id)a1 onceKey:(id)a2;
- (void).cxx_destruct;

@end
