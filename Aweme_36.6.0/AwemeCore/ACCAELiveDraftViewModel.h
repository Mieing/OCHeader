@class NSString, ACCStudioDebouncer, ACCAdvanceEditViewModel, NLEInterface_OC, AWEVideoPublishViewModel, NSObject, ACCAEDataSyncer;
@protocol OS_dispatch_queue, ACCAdvanceEditComponentManager, IESServiceProvider;

@interface ACCAELiveDraftViewModel : NSObject <ACCAELiveDraftViewModelProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) ACCStudioDebouncer *syncDataDebouncer;
@property (weak, nonatomic) ACCAdvanceEditViewModel *advanceEditViewModel;
@property (weak, nonatomic) id<ACCAdvanceEditComponentManager> componentManager;
@property (retain, nonatomic) AWEVideoPublishViewModel *originalPublishModel;
@property (retain, nonatomic) AWEVideoPublishViewModel *editingPublishModel;
@property (retain, nonatomic) NLEInterface_OC *dataSyncNLE;
@property (retain, nonatomic) ACCAEDataSyncer *dataSyncer;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)originalVideoData;
- (id)editingVideoData;
- (id)initWithServiceProvider:(id)a0 advanceEditViewModel:(id)a1 componentManager:(id)a2;
- (id)editingNLE;
- (void)saveLiveDraft;
- (BOOL)advanceEditVCIsOnTop;
- (BOOL)conformPerformanceStrategy;
- (void)saveDraftWithWorkspace:(id)a0 video:(id)a1;
- (void)checkUpdateEditCanvasStateIfNeeded;
- (void).cxx_destruct;
- (void)syncData;

@end
