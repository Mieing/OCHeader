@interface AWETokamakEvent : NSObject

+ (void)reportEvent:(id)a0 param:(id)a1;
+ (void)_reportLogByType:(id)a0 name:(id)a1 param:(id)a2;
+ (void)reportException:(id)a0 param:(id)a1;
+ (id)shared;

- (void)onPowerStateDidChange:(id)a0;
- (void)onSignificantTimeChange:(id)a0;
- (void)onThermalStateDidChange:(id)a0;
- (void)start;

@end
