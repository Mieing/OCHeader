@class NSObject, NSString, NLEInterface_OC, NLETemplateModel_OC, NSMutableArray;
@protocol LVAutoFillFrameDelegate, OS_dispatch_queue;

@interface LVAutoFillFrameService : NSObject

@property (weak, nonatomic) id<LVAutoFillFrameDelegate> delegate;
@property (retain, nonatomic) NLEInterface_OC *nle;
@property (copy, nonatomic) NSString *workspace;
@property (retain, nonatomic) NLETemplateModel_OC *templateModel;
@property (retain, nonatomic) NSMutableArray *originSlots;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processQueue;

- (void)startProcess;
- (id)initWithTemplateModel:(id)a0 workspace:(id)a1;
- (void)exportVideoWithOriginMaterial:(id)a0 slotID:(id)a1 completion:(id /* block */)a2;
- (id)p_buildNLEModelForExportWithTargetSlot:(id)a0;
- (id)p_exportPathWithOriginPathComponent:(id)a0;
- (void)processFinishedWithResults:(id)a0 startTime:(double)a1 error:(id)a2;
- (void).cxx_destruct;
- (void)cancel;

@end
