@class NSString;

@interface AWEPrivacyAlertAdapter : NSObject <AWEPrivacyAlertAdapter>

@property (nonatomic) BOOL hasShownAccountPrivacyAndUserItemAlert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;

- (id)privacyAlterContentWithItem:(id)a0 protocol:(id)a1;
- (id)weakTarget;

@end
