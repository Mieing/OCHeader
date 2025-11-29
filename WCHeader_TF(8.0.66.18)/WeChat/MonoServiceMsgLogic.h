@protocol MonoServiceMsgLogicDelegate;

@interface MonoServiceMsgLogic : NSObject

@property (weak, nonatomic) id<MonoServiceMsgLogicDelegate> m_delegate;

- (void).cxx_destruct;

@end
