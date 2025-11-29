@class NSString, AWEVideoPublishViewModel;
@protocol ACCCameraPureModeService;

@interface ACCRecordMemoryControl : NSObject <ACCCreativePathMessage, ACCPerfDegradeProtocol>

@property (nonatomic) unsigned long long pureModeEntranceType;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (weak, nonatomic) id recordController;
@property (weak, nonatomic) id<ACCCameraPureModeService> pureModeService;
@property (copy, nonatomic) id /* block */ cameraPureModeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPublishModel:(id)a0;
- (void)onDegradedWithPerfType:(unsigned int)a0 degradeType:(unsigned long long)a1 degradeLevel:(unsigned long long)a2;
- (void)logPureModeChange:(BOOL)a0 entranceType:(unsigned long long)a1;
- (void)closePureMode;
- (void)openPureModeIfNeededWithType:(unsigned long long)a0;
- (void)restorePureModeIfNeed;
- (void)openPureModeIfEnableWithEntranceType:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
