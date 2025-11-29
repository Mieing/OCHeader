@class TIMXSDKInstance;
@protocol TIMXMessagePullerInitHandlerDelegateProtocol;

@interface TIMXPullerInitHandlerInitContext : NSObject

@property (weak, nonatomic) TIMXSDKInstance *r;
@property (nonatomic) long long userID;
@property (nonatomic) int inbox;
@property (weak, nonatomic) id<TIMXMessagePullerInitHandlerDelegateProtocol> delegate;

- (id)initWithRootObject:(id)a0 delegate:(id)a1;
- (void).cxx_destruct;

@end
