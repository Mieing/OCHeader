@class NSString;

@interface AWELiteUGSPTimeManager : NSObject <AWEAppAwemeSettingMessage, AWEBasicModeMessage, AWEDigitalWellbeingMessage> {
    unsigned long long _currentSPTime;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (nonatomic) unsigned long long currentSPTime;
@property (copy, nonatomic) NSString *currentSPTimeDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEIncentiveModuleDOUYINLiteAdapterClass;
+ (id)sharedInstance;

- (void)awemeSettingDidChange;
- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)basicModeDidChange:(BOOL)a0;
- (id)aAWEIncentiveModuleDOUYINLiteAdapter;
- (void)agreedPrivacyAlert;
- (id)debugDescriptionWithSPTime:(unsigned long long)a0;
- (void)handleSPTimeChangedWithMode:(unsigned long long)a0 enabled:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
