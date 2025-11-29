@class NSString, AWEVideoPublishViewModel;

@interface ACCVideoDataPublishCanvasState : ACCVideoDataCanvasState <ACCVideoDataPublishCanvasStateProtocol>

@property (nonatomic) struct CGSize { double width; double height; } videoCanvasSize;
@property (nonatomic) struct CGSize { double width; double height; } watermarkCanvasSize;
@property (nonatomic) struct CGSize { double width; double height; } photoCanvasSize;
@property (nonatomic) struct CGSize { double width; double height; } maxPhotoCanvasSize;
@property (nonatomic) struct CGSize { double width; double height; } maxVideoCanvasSize;
@property (nonatomic) struct CGSize { double width; double height; } maxWatermarkCanvasSize;
@property (nonatomic) BOOL useOriginalSizeExport;
@property (nonatomic) BOOL didApplyMaxCanvasSize;
@property (nonatomic) unsigned long long publishType;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } standPlayerFrame;
@property (nonatomic) double standPlayerRatio;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } minCanvasSize;
@property (nonatomic) unsigned long long appliedType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)imageQ_trackDict;
- (void)updateVideoCanvasSize:(struct CGSize { double x0; double x1; })a0 watermarkCanvasSize:(struct CGSize { double x0; double x1; })a1 photoCanvasSize:(struct CGSize { double x0; double x1; })a2;
- (struct CGSize { double x0; double x1; })getPublishMaxCanvasSize;
- (struct CGSize { double x0; double x1; })getPublishCanvasSize;
- (struct CGSize { double x0; double x1; })getPublishResolutionLimit;
- (void)applyMaxCanvasSize:(double)a0;

@end
