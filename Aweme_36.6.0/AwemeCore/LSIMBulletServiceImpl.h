@class NSString;

@interface LSIMBulletServiceImpl : NSObject <LSIMBulletService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (id)shared;

- (id)bizGlobalProps;
- (id)bizGlobalPropsWithUrl:(id)a0;
- (id)getTemplatePath;

@end
