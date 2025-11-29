@class ACCTemplateTextStickerView;
@protocol AEKMegaEditor, AWEEditKit;

@interface ACCTextStickerEditViewModel : NSObject

@property (nonatomic) unsigned long long textEditStyle;
@property (nonatomic) unsigned long long textEditScene;
@property (retain, nonatomic) ACCTemplateTextStickerView *editingStickerView;
@property (nonatomic) BOOL supportTextTemplate;
@property (nonatomic) BOOL enableProviderTextTemplate;
@property (nonatomic) BOOL supportTextReader;
@property (nonatomic) unsigned long long editAbilityOptions;
@property (nonatomic) BOOL hasAddInfoStickerMask;
@property (nonatomic) BOOL enableTextRefactor;
@property (weak, nonatomic) id<AEKMegaEditor> megaEditor;
@property (weak, nonatomic) id<AWEEditKit> editKit;

- (id)baseTextStickerWithId:(id)a0;
- (id)initWithEditStyle:(unsigned long long)a0 viewOptions:(unsigned long long)a1;
- (BOOL)supportTextStickerSocialBind;
- (long long)alignmentWithStickerId:(id)a0 clipIndex:(unsigned long long)a1;
- (unsigned long long)textStyleWithStickerId:(id)a0 clipIndex:(unsigned long long)a1;
- (id)fontModelWithStickerId:(id)a0 clipIndex:(unsigned long long)a1;
- (struct CGPoint { double x0; double x1; })stickerContainerConvertPoint:(struct CGPoint { double x0; double x1; })a0 toView:(id)a1;
- (struct CGSize { double x0; double x1; })stickerContainerConvertSize:(struct CGSize { double x0; double x1; })a0 toView:(id)a1;
- (void).cxx_destruct;

@end
