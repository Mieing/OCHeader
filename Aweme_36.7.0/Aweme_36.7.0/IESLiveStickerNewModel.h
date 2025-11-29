@class NSArray, NSString, NSDictionary, IESLiveStickerItemNewModel;

@interface IESLiveStickerNewModel : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) NSArray *imageStickers;
@property (readonly, nonatomic) NSArray *textStickers;
@property (readonly, nonatomic) BOOL enableNewPanelView;
@property (readonly, nonatomic) BOOL canEditTextStickers;
@property (readonly, copy, nonatomic) NSString *promptForTextStickers;
@property (retain, nonatomic) NSArray *fontConfigs;
@property (readonly, nonatomic) NSString *passedContent;
@property (readonly, nonatomic) IESLiveStickerItemNewModel *passedTextSticker;
@property (readonly, nonatomic) IESLiveStickerItemNewModel *passedImageSticker;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageStickersJSONTransformer;
+ (id)textStickersJSONTransformer;
+ (id)fontConfigsJSONTransformer;
+ (id)passedTextStickerJSONTransformer;
+ (id)passedImageStickerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
