@class NSArray;
@protocol ACCDraftAutoSaveProtocol, ACCSequencePlayControlServiceProtocol, ACCSequenceEditServiceProtocol, ACCEditViewContainer, ACCEditServiceProtocol, ACCRichTextEditorServiceProtocol, ACCVideoEditFlowControlService, ACCCTRServiceProtocol, ACCVideoEditBottomControlService;

@interface AFDEditTextBackgroundComponent : ACCFeatureComponent

@property (retain, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCSequencePlayControlServiceProtocol> sequencePlayControlService;
@property (weak, nonatomic) id<ACCVideoEditBottomControlService> bottomControlService;
@property (weak, nonatomic) id<ACCVideoEditFlowControlService> flowService;
@property (weak, nonatomic) id<ACCDraftAutoSaveProtocol> autoSaveService;
@property (weak, nonatomic) id<ACCRichTextEditorServiceProtocol> richTextEditorService;
@property (weak, nonatomic) id<ACCCTRServiceProtocol> ctrService;
@property (nonatomic) long long currentIndex;
@property (readonly, nonatomic) NSArray *colorConfig;

- (void)componentDidAppear;
- (id)barItem;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (long long)getIndexForColor:(id)a0;
- (BOOL)shouldLoadComponent;
- (void)barItemActionOnView:(id)a0;
- (id)nextColorConfig;
- (void)replaceMainTrackWithImageFile:(id)a0 usingNle:(id)a1;
- (void)updateImageInfoWithFile:(id)a0 withNLE:(id)a1;
- (void)trackForChangeColor;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
