@class ACCTextStickerView, AWETextStickerReadModel, UIView;
@protocol ACCStickerProtocol;

@interface ACCTextStickerHandlerSpeakerModel : NSObject

@property (retain, nonatomic) AWETextStickerReadModel *modelBeforeEditing;
@property (retain, nonatomic) AWETextStickerReadModel *modelWhileEditing;
@property (readonly, weak, nonatomic) ACCTextStickerView *editingTextStickerView;
@property (readonly, weak, nonatomic) UIView<ACCStickerProtocol> *editingTextStickerTimeView;

- (void)updateModelWhileEditing:(id)a0 speakerID:(id)a1 streamSpeakID:(id)a2 soundEffectID:(id)a3 toneTab:(id)a4 challengeIds:(id)a5 isCustomEffect:(BOOL)a6;
- (void)resetModelWhileEditing;
- (void)updateBeforeEditingWithTextStickerView:(id)a0 withBefore:(BOOL)a1;
- (void).cxx_destruct;
- (void)reset;

@end
