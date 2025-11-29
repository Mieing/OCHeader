@class NSString, MMLiveFlowCancelationToken;

@interface MMLiveFlowCancelationActionRegistration : NSObject

@property (retain, nonatomic) NSString *identifierStorage;
@property (weak, nonatomic) MMLiveFlowCancelationToken *token;
@property (copy, nonatomic) id /* block */ action;
@property (retain, nonatomic) id userInfo;
@property (nonatomic) unsigned long long dispatchTarget;
@property (readonly, nonatomic) NSString *identifier;

- (id)initWithCancelationToken:(id)a0 action:(id /* block */)a1 userInfo:(id)a2 dispatchTarget:(unsigned long long)a3;
- (void)unregister;
- (void)invokeAction;
- (void).cxx_destruct;

@end
