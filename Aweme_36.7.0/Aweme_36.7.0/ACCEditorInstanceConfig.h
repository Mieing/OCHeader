@class ACCEditorStickerConfigAssembler, ACCEditorFilterConfigAssembler;

@interface ACCEditorInstanceConfig : NSObject

@property (retain, nonatomic) ACCEditorStickerConfigAssembler *instanceStickerConfigAssembler;
@property (retain, nonatomic) ACCEditorFilterConfigAssembler *filterAssembler;

- (id)initWithEditorInstanceDTO:(id)a0;
- (void).cxx_destruct;

@end
