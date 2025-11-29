@class IESEffectModel;

@interface AWEStickerApplyMusicBeatHandler : AWEStickerApplyBaseHandler

@property (retain, nonatomic) IESEffectModel *currentSticker;

- (void)componentDidAppear;
- (void)camera:(id)a0 didApplySticker:(id)a1 success:(BOOL)a2;
- (void).cxx_destruct;

@end
