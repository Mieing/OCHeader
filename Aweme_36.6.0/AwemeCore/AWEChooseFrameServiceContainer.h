@class NSString, AWEVideoPublishViewModel;

@interface AWEChooseFrameServiceContainer : NSObject <DVEVCContextExternalInjectProtocol>

@property (weak, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)provideEditorEvent;
- (id)provideCoreCanvasService;
- (id)provideCoreImportService;
- (id)provideCoreActionService;
- (void).cxx_destruct;

@end
