@class NSString, BDALokiSheoContainerView, BDSHEngine, UIView;

@interface BDALokiSheoItem : BDALokiBaseItem <BDSHEngineDelegate>

@property (retain, nonatomic) BDALokiSheoContainerView *sheoContainerView;
@property (retain, nonatomic) UIView *sheoView;
@property (retain, nonatomic) BDSHEngine *sheoEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEvent:(id)a0 params:(id)a1 callback:(id /* block */)a2;
- (void)didFirstScreen;
- (void)createViewOnly;
- (void)resetAllSheoViews;
- (void)didFetchedResource:(id)a0 error:(id)a1;
- (BOOL)setupSheoWithTemplateData:(id)a0;
- (void)engine:(id)a0 handleBridgeWithName:(id)a1 params:(id)a2 callback:(id /* block */)a3;
- (void)engine:(id)a0 loadWithEventType:(long long)a1 eventInfo:(id)a2;
- (void)engine:(id)a0 didChangeContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)engineSendLogWithTag:(id)a0 logInfo:(id)a1;
- (void)engineTrackEventWithTag:(id)a0 label:(id)a1 params:(id)a2;
- (void).cxx_destruct;
- (void)reset;
- (void)render;
- (id)itemView;

@end
