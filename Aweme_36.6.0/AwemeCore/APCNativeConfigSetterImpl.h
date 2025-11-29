@class NSString;

@interface APCNativeConfigSetterImpl : ACCUseCase <APCNativeConfigSetter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setNativeConfigByClass:(id)a0;

@end
