@class NSString;

@interface ACCGenericTemplateUseCaseImpl : NSObject <ACCGenericTemplateUseCase>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isTemplate;

@end
