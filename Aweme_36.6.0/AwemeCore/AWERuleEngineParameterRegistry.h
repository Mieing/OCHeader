@class NSString;

@interface AWERuleEngineParameterRegistry : HTSService <AWERuleEngineParameterRegistry>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerParameterWithKey:(id)a0 type:(unsigned long long)a1 builder:(id /* block */)a2;

@end
