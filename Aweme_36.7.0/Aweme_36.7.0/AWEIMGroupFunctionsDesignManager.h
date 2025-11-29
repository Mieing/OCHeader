@class NSString;

@interface AWEIMGroupFunctionsDesignManager : HTSService <AWEIMGroupFunctionsDesignManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)__isMatrixGroupWithConversation:(id)a0;
+ (id)sharedManager;

- (BOOL)__canShowGroupCardInProfile;
- (BOOL)shouldEnableGroupFunctionType:(long long)a0 permissionType:(unsigned long long)a1 withDesignContext:(id)a2;

@end
