@class ACCMulticastProxy, NSMutableArray, Protocol;
@protocol ACCCreationChangeDispatcherDelegate;

@interface ACCCreationChangeDispatcher : NSObject {
    Protocol *m_proto;
    NSMutableArray *m_wrappers;
    ACCMulticastProxy *m_proxy;
}

@property (weak, nonatomic) id<ACCCreationChangeDispatcherDelegate> delegate;

- (id)p_totalObservers;
- (void)p_willForwardInvocation:(id)a0;
- (id)p_descWithInvocation:(id)a0;
- (id)realDispatcher;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)initWithProtocol:(id)a0;
- (void)removeObserver:(id)a0;
- (id)currentObservers;

@end
