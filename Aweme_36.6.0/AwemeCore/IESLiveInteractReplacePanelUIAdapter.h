@class NSString, IESLiveInteractionLayout;

@interface IESLiveInteractReplacePanelUIAdapter : NSObject <IESLiveSocialInteractAction>

@property (retain, nonatomic) IESLiveInteractionLayout *currentLayout;
@property (nonatomic) struct CGSize { double width; double height; } panelSize;
@property (nonatomic) BOOL isAudio;
@property (retain, nonatomic) IESLiveInteractionLayout *currLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableSeatExchangeWithCurrentLayout:(id)a0;

- (void)didSetAttachingDIContext;
- (id)generatorModelsWithaudio1X8Hard;
- (id)generatorModelsWithaudioEqual3X3Hard;
- (id)generatorModelsWithVideoLayoutAfterConfigFetched:(id)a0;
- (id)generatorModelsWithAudioLayoutAfterConfigFetched:(id)a0;
- (id)generatorModelsWithAudioLeft1V8;
- (id)generatorModelsWithEnlargeLayout;
- (double)panelTopGap;
- (double)panelDownGap;
- (struct CGSize { double x0; double x1; })panelSizeWithCurrentLayout;
- (struct CGSize { double x0; double x1; })popUpSize;
- (id)initWithIsAudio:(BOOL)a0;
- (void)generatorModelsWithCurrentLayout:(id /* block */)a0;
- (BOOL)enableSeatExchange;
- (BOOL)anchorIsEnlargeWithCurrentLayout;
- (id)updateEnlargePosInBigPartyWithSlotModel:(id)a0 anchorIndex:(long long)a1 enlargePos:(long long)a2;
- (void).cxx_destruct;

@end
