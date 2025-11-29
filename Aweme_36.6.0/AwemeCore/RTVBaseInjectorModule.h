@class NSString;

@interface RTVBaseInjectorModule : NSObject <RxInjectorModule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindModule:(id)a0;
- (Class)classWithClassName:(id)a0;
- (id)protocolWithProtocolName:(id)a0;

@end
