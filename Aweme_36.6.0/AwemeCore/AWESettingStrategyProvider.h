@class NSString;

@interface AWESettingStrategyProvider : NSObject <AWEAppAwemeSettingMessage, BDStrategyProvider>

@property (copy, nonatomic) NSString *lastActiveSignature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)awemeSettingDidChange;
- (id)signatureFromStrategies:(id)a0;
- (void).cxx_destruct;
- (id)settingName;
- (id)init;
- (long long)priority;
- (void)dealloc;
- (id)settingValue;
- (id)strategies;

@end
