@class UIView, HTSLiveGiftMessage_TextEffect_Detail;

@interface HTSLiveEffectPlayerStringPiece : NSObject

@property (retain, nonatomic) HTSLiveGiftMessage_TextEffect_Detail *textEffect;
@property (retain, nonatomic) UIView *pieceContentView;
@property (nonatomic) double videoRatio;
@property (nonatomic) BOOL needCircle;
@property (nonatomic) double playDuration;
@property (nonatomic) unsigned long long renderContentMode;

- (void)realShow;
- (id)loadBackImageView:(id)a0;
- (id)loadContentLabel:(id)a0;
- (void)showWithTextEffect:(id)a0 videoRatio:(double)a1 needCircle:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;
- (void)hide;
- (void)dealloc;

@end
