@class NSString;

@interface IESAccountDataConfigInject : NSObject <IESAccountDataDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)accountLastLoginUser;
- (void)accountSetJSBStorageItem:(id)a0 biz:(id)a1 forKey:(id)a2;

@end
