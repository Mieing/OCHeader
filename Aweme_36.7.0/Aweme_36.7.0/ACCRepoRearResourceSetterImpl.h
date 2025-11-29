@class NSString;

@interface ACCRepoRearResourceSetterImpl : NSObject <ACCRepoRearResourceSetter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configEffectIds:(id)a0 autoApply:(BOOL)a1 uiHide:(BOOL)a2;

@end
