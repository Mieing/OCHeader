@class NSString;

@interface MMKindaPasswordManagerImpl : NSObject <MMKindaPasswordManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startResetPasswordImpl:(id)a0 cancelCallback:(id)a1 isDomesticUser:(BOOL)a2;

@end
