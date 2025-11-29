@class NSString, AWEOneKeyGuardModel;

@interface AWEPrivacyOneKeyGuardManager : NSObject <AWEUserMessage>

@property (nonatomic) BOOL shouldShowSearchedByStranger;
@property (retain, nonatomic) AWEOneKeyGuardModel *oneKeyGuardModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)fetchOneKeyGuardSettingWithCompletion:(id /* block */)a0;
- (void)postOneKeyGuardSetting:(long long)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
