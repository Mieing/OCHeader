@class IESECBlenderContext, IESECServiceProxy, NSString, NSMutableDictionary;
@protocol IESECBlenderBaseContainerDelegate, IESECBlenderPrefetch;

@interface IESECBlenderHybridAtomicAbilityHandler : NSObject <IESECBlenderHybridAtomicAbilityHandler> {
    NSMutableDictionary *p_hashObserver;
}

@property (weak, nonatomic) id<IESECBlenderBaseContainerDelegate> baseContainerDelegate;
@property (retain, nonatomic) IESECServiceProxy<IESECBlenderPrefetch> *prefetcher;
@property (weak, nonatomic) IESECBlenderContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerBaseContainerDelegate:(id)a0;
- (void)excuteAtomicAbility:(id)a0 completionHandler:(id /* block */)a1;
- (void)registerHandler:(id)a0 forHandler:(SEL)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
