@class NSString, AWEVideoPublishViewModel;

@interface ACCChapterServiceContainer : NSObject <DVEVCContextExternalInjectProtocol>

@property (weak, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)provideDVELogger;
- (id)provideEditorEvent;
- (id)provideToastView;
- (id)provideCoreCanvasService;
- (id)provideCoreImportService;
- (id)provideCoreActionService;
- (void).cxx_destruct;

@end
