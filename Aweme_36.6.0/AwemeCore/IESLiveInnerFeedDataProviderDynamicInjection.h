@class NSString, NSMutableSet;
@protocol IESLiveInnerFeedDataProviderInjectionProtocol;

@interface IESLiveInnerFeedDataProviderDynamicInjection : NSObject <IESLiveInnnerFeedDataSourceDynamicInjectionProvider, IESLiveInnerFeedDataProviderInjectionProtocol>

@property (retain, nonatomic) NSMutableSet<IESLiveInnerFeedDataProviderInjectionProtocol> *injections;
@property (retain, nonatomic) NSMutableSet<IESLiveInnerFeedDataProviderInjectionProtocol> *waitingInjections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)willFetchWithURL:(id)a0 withDataChangedType:(unsigned long long)a1 parameters:(id)a2 updateBlock:(id /* block */)a3;
- (void)didFetchWithResponse:(id)a0 error:(id)a1;
- (long long)injectionPriority;
- (BOOL)registerInjection:(id)a0;
- (void)unregisterInjection:(id)a0;
- (void).cxx_destruct;

@end
