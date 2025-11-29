@interface HunterCustomDynamicPatchModelPlugin : HunterBasePlugin

- (BOOL)shouldActive;
- (void)onHunterClientDataProcessStart:(id)a0;
- (void)processDynamicPatchModel;

@end
