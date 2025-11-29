@class NSString;

@interface IESLiveAvatarServiceImpl : NSObject <IESLivePrivilegeGlobalModuleAvatarService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createBorderItem;
- (void)showBorderInView:(id)a0 borderItem:(id)a1;

@end
