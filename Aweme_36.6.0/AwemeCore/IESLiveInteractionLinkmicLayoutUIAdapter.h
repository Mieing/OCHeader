@class NSArray, NSString, IESLiveInteractionLayout;

@interface IESLiveInteractionLinkmicLayoutUIAdapter : IESLiveLinkmicLayoutUIAdapter <IESLiveLinkmicLayoutConfigParser, IESLiveLinkmicLayoutConfigProcessor>

@property (retain, nonatomic) IESLiveInteractionLayout *layout;
@property (nonatomic) BOOL contentForceFillToHeight;
@property (nonatomic) double previewBottomAddition;
@property (nonatomic) long long uilayout;
@property (copy, nonatomic) NSArray *uiFeatureList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)logEvent:(id)a0 params:(id)a1;
- (BOOL)isCurrentLandscape;
- (id)configModelWithDictionary:(id)a0 error:(id *)a1;
- (id)resourceParser;
- (id)configProcessor;
- (id)mergeConfig:(id)a0 withOffsetConfig:(id)a1;
- (id)mergeDynamicOffsetModel:(id)a0;
- (id)processedConfigModel:(id)a0;
- (void)processBuiltLayout:(id)a0 config:(id)a1 adapter:(id)a2;
- (BOOL)isNonOverlapping1v6Layout;
- (double)nonOverlapping1v6TopMargin;
- (double)nonOverlapping1v6BottomMargin;
- (double)nonOverlapping1v6StandardMargin;
- (BOOL)isFloatDynamicAnchor;
- (BOOL)disableSeparator;
- (id)initWithInteractionLayout:(id)a0;
- (long long)configLayoutOrientationWithInterfaceOrientation:(long long)a0;
- (unsigned long long)linkmicScaleModeWithCanvasScaleMode:(long long)a0;
- (unsigned long long)linkmicAlignTypeWithCanvasAlignType:(long long)a0;
- (BOOL)hasOffsetMap;
- (double)topMarginAddition;
- (double)bottomMarginAddition;
- (void)updateConfigForPreview:(id)a0;
- (void)updateConfigForIPad:(id)a0;
- (void)updateConfigCrossRoomStreamInsets:(id)a0;
- (void)updateConfigForDynamic1V6Horizontal:(id)a0;
- (void)updateConfigForDynamic1v6Anchor:(id)a0;
- (void)updateConfigForFoldableLayout:(id)a0;
- (void)updateLayoutForAudio1v8EnlargeLayout:(id)a0 config:(id)a1 adapter:(id)a2;
- (void).cxx_destruct;
- (BOOL)isAnchor;
- (BOOL)isPreview;
- (void)setup;
- (struct CGSize { double x0; double x1; })mediaSize;

@end
