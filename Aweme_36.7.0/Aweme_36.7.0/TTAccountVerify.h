@class NSMutableDictionary, NSDictionary, NSString, NSNumber;

@interface TTAccountVerify : NSObject <BDXContainerLifecycleProtocol>

@property (class, retain, nonatomic) NSMutableDictionary *accountVerifiers;
@property (class, readonly, nonatomic) TTAccountVerify *currentVerifier;

@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSDictionary *verifyDecision;
@property (nonatomic) BOOL didFinish;
@property (retain, nonatomic) NSNumber *accountVerifierId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerWillDestory:(id)a0;
- (void)containerDidClose:(id)a0;
- (void)handleVerifyWithVerifyDecision:(id)a0 completion:(id /* block */)a1;
- (void)finishWithError:(id)a0 result:(id)a1;
- (void)openVerifyDecisionSchema;
- (void).cxx_destruct;
- (id)init;
- (void)initData;

@end
