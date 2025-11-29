@interface ACCDuetEditViewModel : NSObject

+ (BOOL)enableDuetMultiTrackWithPublishViewModel:(id)a0;
+ (void)setupDuetMultiTrackAudioWithPublishViewModel:(id)a0;
+ (id)getDuetSourceAsset:(id)a0;
+ (void)setupImageAlbumDuetAudioTrackWithPublishViewModel:(id)a0 nleModel:(id)a1;
+ (void)setupDuetMultiTrackCanvas:(id)a0;
+ (void)setupImageAlbumDuetAllTrackSlotsAndDurationWithPublishViewModel:(id)a0 nleModel:(id)a1;
+ (void)setupDuetMultiTrackAudioTrackWithPublishViewModel:(id)a0 nleModel:(id)a1;
+ (void)handleDuetMinimunClipTimeWithNLEModel:(id)a0 publishViewModel:(id)a1;
+ (void)handleDuetLayoutLeftToRight:(BOOL)a0 nleModel:(id)a1;
+ (void)handleDuetLayoutUpToDown:(BOOL)a0 layoutFrameModel:(id)a1 publishViewModel:(id)a2 nleModel:(id)a3;
+ (void)handleDuetLayoutPictureInPicture:(id)a0 publishViewModel:(id)a1 nleModel:(id)a2;
+ (struct { long long x0; int x1; unsigned int x2; long long x3; })mainTrackDurationWithNLEModel:(id)a0 publishViewModel:(id)a1;
+ (id)getAudioTrackSlotsWithNLEModel:(id)a0;
+ (void)updateMainTrackWithClipTimeEnd:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 nleModel:(id)a1 publishViewModel:(id)a2;
+ (void)updateSubTrackWithClipTimeEnd:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 nleModel:(id)a1 publishViewModel:(id)a2;
+ (void)updateImageAlbumDuetAudioTrackWithClipTimeEnd:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 publishViewModel:(id)a1 nleModel:(id)a2;
+ (id)getMainTrackSlotsWithNLEModel:(id)a0;
+ (struct { long long x0; int x1; unsigned int x2; long long x3; })subTrackDurationWithNLEModel:(id)a0 publishViewModel:(id)a1;
+ (void)updateAudioTrackWithClipTimeEnd:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 nleModel:(id)a1 publishViewModel:(id)a2;
+ (void)updateMainTrackWithTransformX:(float)a0 transformY:(float)a1 scale:(float)a2 nleModel:(id)a3;
+ (void)updateSubTrackWithTransformX:(float)a0 transformY:(float)a1 scale:(float)a2 nleModel:(id)a3;
+ (struct CGSize { double x0; double x1; })sizeWithNleModel:(id)a0 mainTrack:(BOOL)a1;
+ (void)updateMainTrackWithCropLeftTopPoint:(struct CGPoint { double x0; double x1; })a0 rightBottomPoint:(struct CGPoint { double x0; double x1; })a1 nleModel:(id)a2;
+ (void)updateSubTrackWithCropLeftTopPoint:(struct CGPoint { double x0; double x1; })a0 rightBottomPoint:(struct CGPoint { double x0; double x1; })a1 nleModel:(id)a2;
+ (void)updateSubTrackCanvasStyleWithBorderWidth:(long long)a0 borderColor:(id)a1 nleModel:(id)a2;
+ (id)getSubTrackSlotsWithNLEModel:(id)a0;
+ (id)megaEditorWithPublishViewModel:(id)a0;
+ (void)configImpotMultiTrackDuetWithPublishViewModel:(id)a0;

@end
