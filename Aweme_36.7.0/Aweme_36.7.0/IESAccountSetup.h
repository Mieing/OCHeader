@interface IESAccountSetup : NSObject

+ (void)startWithConfig:(id)a0;
+ (void)updateSettingsWithTTAccountSettings:(id)a0 IESAccountSettings:(id)a1;
+ (void)setUpSaaS:(id)a0;
+ (void)setUpTTAccount:(id)a0;

@end
