@class NSString, NSArray, IESLiveLinkMicSEIParserResult;

@interface IESLiveStreamPlayerLayoutMediaLinkmic : IESLiveStreamPlayerLayoutBase <IESLiveAutoRotateAction, IESLiveSEIListener>

@property (nonatomic) unsigned long long currentLayoutGridCount;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } currentCropRatioFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originContentFrame;
@property (nonatomic) long long currentLayoutType;
@property (copy, nonatomic) NSString *currentFocusId;
@property (copy, nonatomic) NSArray *regions;
@property (retain, nonatomic) IESLiveLinkMicSEIParserResult *lastSEIResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)animationForAutoRotateToOrientation:(long long)a0 duration:(double)a1 size:(struct CGSize { double x0; double x1; })a2;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)a0;
- (unsigned long long)seiDispatchPriority;
- (unsigned long long)typeToCheckIfLaterThanWhenReuseSEI;
- (BOOL)isValidRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)layoutWithMetaInfo:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })losePrecisionRectWith:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldUseCurrentLayoutType;
- (void)layoutWithPreviousType:(unsigned long long)a0;
- (void)resetLinkmicParam;
- (void)resetPlayerCropParam;
- (BOOL)shouldUpdateLayout:(long long)a0 focusId:(id)a1;
- (void)setupPlayerCropParamIfNeeded;
- (void)setupPlayerWithSEIResult:(id)a0 contentRatioFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 distance:(double)a2 background:(id)a3 layoutType:(long long)a4 focusId:(id)a5;
- (void)resolveLinkmicSEIResult:(id)a0 mediaSize:(struct CGSize { double x0; double x1; })a1 containerSize:(struct CGSize { double x0; double x1; })a2 completion:(id /* block */)a3;
- (void)updatePlayerRatioFrameLayoutWithScreenSize:(struct CGSize { double x0; double x1; })a0 isLandscape:(BOOL)a1;
- (void)updateLayoutMachineCropParamWithContainerSize:(struct CGSize { double x0; double x1; })a0 isLandscape:(BOOL)a1;
- (BOOL)isPad;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutFrame;

@end
