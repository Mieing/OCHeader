@class AWEVideoPublishViewModel, NSString, NLEInterface_OC;
@protocol ACCEditSessionProvider;

@interface ACCNLEEditMultiTrackWrapper : NSObject <ACCEditBuildListener, ACCEditMultiTrackProtocol>

@property (weak, nonatomic) NLEInterface_OC *nle;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (weak, nonatomic) id<ACCEditSessionProvider> editSessionProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onEditSessionInit:(id)a0;
- (void)onNLEEditorInit:(id)a0;
- (void)setupPublishViewModel:(id)a0;
- (id)getMainTrackSlots;
- (void)commitAndRender;
- (id)getSubTrackSlots;
- (void)setupMultiTrackCanvas;
- (struct CGSize { double x0; double x1; })sizeWithAsset:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })mainTrackDuration;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })subTrackDuration;
- (void)updateMainTrackWithTransformX:(float)a0 transformY:(float)a1 scale:(float)a2;
- (void)updateSubTrackWithTransformX:(float)a0 transformY:(float)a1 scale:(float)a2;
- (void)updateMainTrackWithClipTimeEnd:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)updateSubTrackWithClipTimeEnd:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)updateMainTrackWithCropLeftTopPoint:(struct CGPoint { double x0; double x1; })a0 rightBottomPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)updateSubTrackWithCropLeftTopPoint:(struct CGPoint { double x0; double x1; })a0 rightBottomPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)updateMainTrackCanvasStyleWithBorderWidth:(long long)a0 borderColor:(id)a1;
- (void)updateSubTrackCanvasStyleWithBorderWidth:(long long)a0 borderColor:(id)a1;
- (void).cxx_destruct;

@end
