@class NSString;

@interface IESGCPDetailInteactivePlayBarViewModel : IESGCPDetailInteractionBarViewModel <IESGCPLiveIMMessageSubscriber>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackShowEvent;
- (void)openSchema;
- (void)trackClickEvent;
- (id)init;
- (void)messageReceived:(id)a0;

@end
