@class NSString;

@interface IESLivePlaybackPictureScaleStore : NSObject <IESLiveFIFAPlayerScaleAction>

@property (nonatomic) double scale;
@property (nonatomic) struct CGPoint { double x; double y; } positionTranslation;
@property (nonatomic) double recordedScale;
@property (nonatomic) struct CGPoint { double x; double y; } recordedPositionTranslation;
@property (nonatomic) struct CGSize { double width; double height; } transformBaseRange;
@property (nonatomic) struct CGSize { double width; double height; } pictureContentSize;
@property (nonatomic) BOOL isPinching;
@property (nonatomic) BOOL isMoving;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)updateScale:(double)a0;
- (void)appendMovement:(struct CGPoint { double x0; double x1; })a0;
- (void)setMovedPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)resetRecordedIfNeed:(BOOL)a0;
- (id)initWithTransformBaseRange:(struct CGSize { double x0; double x1; })a0;
- (void)reset;

@end
