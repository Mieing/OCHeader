@class HunterStorageDataProcessorManager;

@interface HunterStorageDataProcessorPlugin : HunterBasePlugin

@property (retain, nonatomic) HunterStorageDataProcessorManager *storageDataProcessorManager;

- (BOOL)shouldActive;
- (void)onHunterBindStart:(id)a0;
- (void)onHunterClientDataProcessStart:(id)a0;
- (void)setupStorageDataProcessor;
- (id)processStorageData;
- (void).cxx_destruct;

@end
