@class NSNumber, NSMutableArray, ACCStickerConfig;

@interface ACCStickerGroupView : ACCGestureResponsibleStickerView {
    ACCStickerConfig *_config;
}

@property (retain, nonatomic) NSNumber *groupId;
@property (retain, nonatomic) NSMutableArray *stickerList;

- (BOOL)willGestureStart:(id)a0;
- (void)handlePanGesture:(id)a0 withNewCenter:(struct CGPoint { double x0; double x1; })a1;
- (void)endGesture:(id)a0;
- (void)recordStickerLocation;
- (void)updateContentScaleIfNeeded;
- (void)addStickerView:(id)a0;
- (void)recoverView:(id)a0 withGeometryModel:(id)a1;
- (struct CGPoint { double x0; double x1; })centerPointInContainerViewWithGeometryModel:(id)a0;
- (id)config;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)handlePinchGesture:(id)a0;
- (void)handleTapGesture:(id)a0;
- (void)handleRotationGesture:(id)a0;
- (void)setupConfig;

@end
