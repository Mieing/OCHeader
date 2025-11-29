@class NSString;

@interface EcsGiftThanksMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;
@property (copy, nonatomic) id /* block */ sendResultCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestThanksInfo:(id)a0 successBlock:(id /* block */)a1 failBlock:(id /* block */)a2;
- (void)reportSendThanks:(id)a0 resultCallback:(id /* block */)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleRequestThanksInfoCallback:(id)a0;
- (void).cxx_destruct;

@end
