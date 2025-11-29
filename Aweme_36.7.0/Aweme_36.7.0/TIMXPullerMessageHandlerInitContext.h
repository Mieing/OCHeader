@class TIMXSDKInstance;
@protocol TIMXPullerMessageHandlerDelegateProtocol;

@interface TIMXPullerMessageHandlerInitContext : NSObject

@property (weak, nonatomic) TIMXSDKInstance *r;
@property (nonatomic) long long userID;
@property (nonatomic) int inbox;
@property (weak, nonatomic) id<TIMXPullerMessageHandlerDelegateProtocol> delegate;

- (id)initWithRootObject:(id)a0 delegate:(id)a1;
- (void).cxx_destruct;

@end
