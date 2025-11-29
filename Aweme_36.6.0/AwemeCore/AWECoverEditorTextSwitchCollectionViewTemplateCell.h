@class NSString, ACCTextStickerView, AWETextTemplateController, AWEVideoPublishViewModel;
@protocol AWECoverEditorTextSwitchCollectionViewTemplateCellDelegate;

@interface AWECoverEditorTextSwitchCollectionViewTemplateCell : UIView <AWETextTemplateControllerDelegate>

@property (nonatomic) double panelHeight;
@property (retain, nonatomic) AWETextTemplateController *textTemplateController;
@property (retain, nonatomic) ACCTextStickerView *currentTextStickerView;
@property (nonatomic) BOOL isTextTemplateUsed;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (weak, nonatomic) id<AWECoverEditorTextSwitchCollectionViewTemplateCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createTemplatePickerConfigWithPanelHeight:(double)a0;

- (BOOL)enableTextRefactor;
- (void)stickerPickerController:(id)a0 didSelectSticker:(id)a1 extraParams:(id)a2 indexPath:(id)a3 categoryIdentifier:(id)a4;
- (void)stickerPickerController:(id)a0 didDeselectSticker:(id)a1;
- (id)initWithPublishModel:(id)a0 panelHeight:(double)a1;
- (void)scrollToSelectedTemplateWithStickerView:(id)a0;
- (void)clearSelectedTemplate;
- (void)scrollToSelectedTemplateWithEffectModelId:(id)a0 categoryIndex:(long long)a1;
- (void).cxx_destruct;
- (void)setupUI;

@end
