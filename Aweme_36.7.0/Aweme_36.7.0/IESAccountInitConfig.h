@class NSString;

@interface IESAccountInitConfig : NSObject <IESAccountInitConfig>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackDelegate;
- (id)ttaSetupConfig;
- (id)certDelegate;
- (id)abDelegate;
- (id)loginStatusDelegate;
- (id)thirdDelegate;
- (id)switchAccountDelegate;
- (id)bindPhoneDelegate;
- (id)uiDelegate;
- (id)dataDelegate;
- (id)networkDelegate;
- (id)commonDelegate;

@end
