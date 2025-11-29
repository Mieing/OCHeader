@class HunterClientDataProcessorManager;

@interface HunterAUGPagePlugin : HunterBasePlugin

@property (nonatomic) BOOL isAUGPage;
@property (retain, nonatomic) HunterClientDataProcessorManager *clientDataProcessorManager;

- (BOOL)shouldActive;
- (void)onHunterBindStart:(id)a0;
- (void)setupAUGClientDataProcessor;
- (id)processAUGPageClientData;
- (void)processAUGPageTemplateBundleStrategy;
- (void)onHunterClientDataProcessStart:(id)a0;
- (void)onHunterProcessStart:(id)a0;
- (void).cxx_destruct;
- (id)initWithSchema:(id)a0;

@end
