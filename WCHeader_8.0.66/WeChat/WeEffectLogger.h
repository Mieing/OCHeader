@class NSString;

@interface WeEffectLogger : MMUserService <XEffectLogAdapterDelegate, WeVisLogAdapterDelegate, MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
