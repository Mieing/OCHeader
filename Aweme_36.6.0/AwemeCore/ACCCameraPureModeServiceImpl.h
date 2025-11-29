@class ACCRecordMemoryControl, NSString, NSHashTable;

@interface ACCCameraPureModeServiceImpl : NSObject <ACCCameraPureModeService>

@property (retain, nonatomic) NSHashTable *recovers;
@property (weak, nonatomic) ACCRecordMemoryControl *memoryControl;
@property (readonly, nonatomic) BOOL disable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addPureModeRecover:(id)a0;
- (void)recoverEffectWhenClosed;
- (void)bindMemoryControl:(id)a0;
- (id)currentMemoryControl;
- (void).cxx_destruct;
- (id)init;

@end
