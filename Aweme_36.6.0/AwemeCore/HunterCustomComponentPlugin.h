@interface HunterCustomComponentPlugin : HunterBasePlugin

- (BOOL)shouldActive;
- (void)onHunterBindStart:(id)a0;
- (void)onHunterClientDataProcessStart:(id)a0;
- (void)addCustomerComponentIfNeed;

@end
