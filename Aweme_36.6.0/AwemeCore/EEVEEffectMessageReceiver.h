@class NSString;

@interface EEVEEffectMessageReceiver : NSObject <VEEffectMessageReceiver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)messageCenter:(id)a0 didReceiveMessage:(id)a1;

@end
