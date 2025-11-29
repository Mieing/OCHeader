@class NSString;

@interface DYUserBindThirdService : HTSService <AWEUserBindThirdService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)startBindThirdForPlatform:(unsigned long long)a0 completion:(id /* block */)a1;
+ (void)startUnbindThirdForPlatform:(unsigned long long)a0 completion:(id /* block */)a1;
+ (BOOL)SSOAvailable:(unsigned long long)a0;


@end
