@class NSString, AWESpecialCardByteLinkCoordinator;

@interface AWESpecialCardByteLinkSubscriber : NSObject <IESLiveIMMessageSubscriber>

@property (weak, nonatomic) AWESpecialCardByteLinkCoordinator *coordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
