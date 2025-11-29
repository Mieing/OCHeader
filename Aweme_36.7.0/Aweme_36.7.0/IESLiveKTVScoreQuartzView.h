@class CAEmitterLayer, NSString, UIImageView, CAEmitterCell, UIImage, NSObject;
@protocol OS_dispatch_queue;

@interface IESLiveKTVScoreQuartzView : UIView <IESLiveKTVDecorateMidiProtocol>

@property (nonatomic) BOOL enableDecorate;
@property (retain, nonatomic) UIImageView *levelImageView;
@property (retain, nonatomic) CAEmitterLayer *emitterLayer;
@property (retain, nonatomic) CAEmitterLayer *emitterLayer2;
@property (retain, nonatomic) CAEmitterLayer *emitterLayer3;
@property (retain, nonatomic) CAEmitterLayer *emitterLayer4;
@property (retain, nonatomic) CAEmitterCell *emitterCellNote;
@property (retain, nonatomic) CAEmitterCell *emitterCellWhiteStar;
@property (retain, nonatomic) CAEmitterCell *emitterCellGoldenStar;
@property (retain, nonatomic) CAEmitterCell *emitterCellWhiteBall;
@property (retain, nonatomic) CAEmitterLayer *emitterLayerNoteV2;
@property (retain, nonatomic) CAEmitterLayer *emitterLayerWhiteStarV2;
@property (retain, nonatomic) CAEmitterLayer *emitterLayerGoldenStarV2;
@property (retain, nonatomic) CAEmitterLayer *emitterLayerWhiteBallV2;
@property (retain, nonatomic) UIImage *uniformA;
@property (retain, nonatomic) UIImage *uniformB;
@property (retain, nonatomic) UIImage *uniformC;
@property (retain, nonatomic) UIImage *advanceA;
@property (retain, nonatomic) UIImage *advanceB;
@property (nonatomic) BOOL currentFlag;
@property (nonatomic) long long currentLevel;
@property (nonatomic) struct CGPoint { double x; double y; } currentPosition;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *setUrlQueue;
@property (nonatomic) BOOL isCPUOptimize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupEmitter;
- (void)updateDecorate:(id)a0;
- (void)startAnimationWithPosition:(struct CGPoint { double x0; double x1; })a0 hitCombo:(BOOL)a1 currentLevel:(long long)a2;
- (void)startAnimationWithPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)startShowLevel:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 enableDecorate:(BOOL)a1;
- (id)createEmitterLayerWithOffset:(double)a0;
- (id)createEmitterCellNote;
- (id)createEmitterCellWhiteStar;
- (id)createEmitterCellGoldenStar;
- (id)createEmitterCellWhiteBall;
- (void)updateEmittersWithHitCombo:(BOOL)a0 currentLevel:(long long)a1;
- (void)updateImageWithType:(unsigned long long)a0 material:(id)a1;
- (id)getImageWithMaterial:(id)a0;
- (void)removeAllLayers;
- (void)p_updateDecorateFor:(id)a0 material:(id)a1;
- (void).cxx_destruct;

@end
