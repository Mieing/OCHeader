@class NSString;

@interface ACCImageThemeImpl : NSObject <ACCImageThemeProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)preferDarkImage:(id)a0;
- (id)preferLightImage:(id)a0;

@end
