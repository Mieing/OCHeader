@interface HunterContainerPerformanceDataPlugin : HunterBasePlugin

- (BOOL)shouldActive;
- (void)onHunterLoadStart:(id)a0;
- (void)onHunterProcessEnd:(id)a0;
- (void)injectPerfDataIntoContext;

@end
