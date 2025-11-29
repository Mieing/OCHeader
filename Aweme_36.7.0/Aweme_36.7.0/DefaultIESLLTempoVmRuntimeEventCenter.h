@class NSString, IESLLTempoThreadSafeDictionary;

@interface DefaultIESLLTempoVmRuntimeEventCenter : NSObject <IESLLTempoVmRuntimeEventCenter>

@property (retain, nonatomic) IESLLTempoThreadSafeDictionary *eventHolder;
@property (retain, nonatomic) IESLLTempoThreadSafeDictionary *stickyEventList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)doRegisterEvent:(id)a0 receiver:(id)a1;
- (void)registerEvent:(id)a0 receiver:(id)a1;
- (void)unregisterEvent:(id)a0 receiver:(id)a1;
- (void)unregisterAllReceiverForEvent:(id)a0;
- (void)unregisterAll;
- (void)sendEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
