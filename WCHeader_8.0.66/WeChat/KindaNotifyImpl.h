@class NSString;

@interface KindaNotifyImpl : NSObject <MMKindaNotify>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)notify:(id)a0 value:(id)a1;

@end
