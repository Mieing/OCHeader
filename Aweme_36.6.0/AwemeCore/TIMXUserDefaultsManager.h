@class NSString, NSUserDefaults, TIMXSDKInstance;

@interface TIMXUserDefaultsManager : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly, nonatomic) NSUserDefaults *appUserDefault;
@property (readonly, nonatomic) NSUserDefaults *businessUserDefault;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
