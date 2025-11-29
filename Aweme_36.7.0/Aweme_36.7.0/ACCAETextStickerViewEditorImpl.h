@class NSString;
@protocol AWEEditKit, ACCBaseStickerAbility;

@interface ACCAETextStickerViewEditorImpl : NSObject <ACCAETextStickerViewEditor>

@property (weak, nonatomic) id<ACCBaseStickerAbility> baseStickerAbility;
@property (weak, nonatomic) id<AWEEditKit> editKit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)geoModelWithStickerViewId:(id)a0;
- (id)configWithStickerId:(id)a0;
- (void)updateStickerTimeRange:(id)a0;
- (void)updateStickerGeometry:(id)a0;
- (void)consumeClipDiffOptions:(unsigned long long)a0 data:(id)a1;
- (id)textTemplateViewWithStickerId:(id)a0;
- (void)updateStickerContent:(id)a0;
- (void)updateStickerFont:(id)a0;
- (void)updateStickerColor:(id)a0;
- (void)updateStickerTextStyle:(id)a0;
- (void)updateStickerAlignment:(id)a0;
- (void)updateStickerFontScale:(id)a0;
- (void)p_updateStickerView:(id)a0 content:(id)a1;
- (void)p_updateStickerView:(id)a0 font:(id)a1;
- (void)p_updateStickerView:(id)a0 color:(id)a1;
- (void).cxx_destruct;
- (void)render:(id)a0;

@end
