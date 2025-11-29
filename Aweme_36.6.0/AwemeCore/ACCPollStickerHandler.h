@class UIView, ACCPollStickerEditView;
@protocol ACCPollStickerDataProvider, ACCStickerProtocol;

@interface ACCPollStickerHandler : ACCStickerHandler

@property (retain, nonatomic) ACCPollStickerEditView *editView;
@property (weak, nonatomic) UIView<ACCStickerProtocol> *wrapper;
@property (weak, nonatomic) id<ACCPollStickerDataProvider> dataProvider;
@property (copy, nonatomic) id /* block */ editViewOnStartEdit;
@property (copy, nonatomic) id /* block */ editViewOnFinishEdit;
@property (copy, nonatomic) id /* block */ editViewOnFinishAnimationEdit;
@property (copy, nonatomic) id /* block */ onStickerWillDelete;
@property (copy, nonatomic) id /* block */ onStickerApplySuccess;
@property (copy, nonatomic) id /* block */ gestureEndCallback;

- (void)addInteractionStickerInfoToArray:(id)a0 idx:(long long)a1;
- (BOOL)canHandleSticker:(id)a0;
- (void)apply:(id)a0 index:(unsigned long long)a1 doRender:(BOOL)a2;
- (BOOL)canRecoverSticker:(id)a0;
- (void)recoverSticker:(id)a0;
- (id)currentPollStickerView;
- (void)editPollStickerView:(id)a0;
- (id)addPollStickerWithModel:(id)a0;
- (void)addPollInteractionStickerInfo:(id)a0 toArray:(id)a1 idx:(long long)a2;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
