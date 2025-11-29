@class NSDictionary, NSString, AWEVideoPublishViewModel;
@protocol ACCStickerLogger;

@interface ACCTextStickerEditTracker : NSObject

@property (copy, nonatomic) NSDictionary *commonParams;
@property (weak, nonatomic) id<ACCStickerLogger> stickerLogger;
@property (weak, nonatomic) AWEVideoPublishViewModel *context;
@property (nonatomic) BOOL isAIImageTextEditing;
@property (nonatomic) BOOL isTextScaleChanged;
@property (nonatomic) BOOL isTextStyleChanged;
@property (nonatomic) BOOL isTextFontChanged;
@property (retain, nonatomic) NSString *textTemplateCategory;
@property (nonatomic) double preTextFontSize;

- (id)extraParams:(id)a0 editMode:(unsigned long long)a1;
- (void)trackTextStickerFinishEditEvent:(id)a0 isAutoAdded:(BOOL)a1 isEmptySticker:(BOOL)a2 stickerData:(id)a3;
- (void)trackTextTemplateInputEvent:(id)a0 stickerData:(id)a1;
- (void)trackFontSliderAdjustEvent:(double)a0 stickerData:(id)a1;
- (void)trackInputViewTabChangedWithType:(unsigned long long)a0 stickerData:(id)a1;
- (void)trackTextTemplateDeselect:(id)a0 stickerData:(id)a1;
- (id)initWithStickerLogger:(id)a0 context:(id)a1;
- (id)getCoreParams:(id)a0;
- (id)socialTrackInfo:(id)a0;
- (id)currentTextTemplateId:(id)a0;
- (BOOL)isEditTemplateContent:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
