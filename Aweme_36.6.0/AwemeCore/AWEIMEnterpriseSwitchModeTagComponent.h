@class NSString;

@interface AWEIMEnterpriseSwitchModeTagComponent : AWEIMChatCellComponentBase <AWEIMMessageTabModeAction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)updateComponentWhenChatUpdate:(id)a0;
- (void)messageTabModeDidChangeWithInfo:(id)a0;
- (void)p_refreshEnterpriseSwitchModeTagIfNeeded:(id)a0;
- (void)__didChangeMessageTabMode:(id)a0;
- (void)p_setEnterpriseSwitchModeTag:(long long)a0;
- (void)dealloc;

@end
