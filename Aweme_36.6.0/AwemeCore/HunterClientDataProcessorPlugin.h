@class HunterClientDataProcessorManager;

@interface HunterClientDataProcessorPlugin : HunterBasePlugin

@property (retain, nonatomic) HunterClientDataProcessorManager *clientDataProcessorManager;

- (BOOL)shouldActive;
- (void)onHunterBindStart:(id)a0;
- (void)onHunterClientDataProcessStart:(id)a0;
- (void)onHunterClientDataProcessEnd:(id)a0;
- (void)setupClientDataProcessor;
- (id)processClientData;
- (BOOL)whetherTargetPage:(id)a0;
- (void).cxx_destruct;

@end
