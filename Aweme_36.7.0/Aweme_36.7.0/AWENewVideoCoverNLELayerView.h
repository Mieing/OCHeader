@class AWETextTemplateStickerModel, NSString, IESEffectModel, AWEStoryTextImageModel;

@interface AWENewVideoCoverNLELayerView : ACCNLELayerView

@property (retain, nonatomic) AWEStoryTextImageModel *textModel;
@property (retain, nonatomic) IESEffectModel *selectedSticker;
@property (copy, nonatomic) NSString *stickerText;
@property (retain, nonatomic) AWETextTemplateStickerModel *textTemplateModel;
@property (copy, nonatomic) NSString *templateId;
@property (nonatomic) long long stickerId;
@property (nonatomic, getter=isTextOrTemplateLayer) BOOL textOrTemplateLayer;
@property (nonatomic) BOOL hasBeenEdit;
@property (copy, nonatomic) NSString *textId;
@property (copy, nonatomic) NSString *categoryName;
@property (retain, nonatomic) NSString *effectIdentifier;
@property (retain, nonatomic) NSString *layerId;
@property (nonatomic) BOOL isAdd;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
