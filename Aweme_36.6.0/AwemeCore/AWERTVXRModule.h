@class NSString;

@interface AWERTVXRModule : RTVBaseInjectorModule <RxInjectorModule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindModule:(id)a0;

@end
