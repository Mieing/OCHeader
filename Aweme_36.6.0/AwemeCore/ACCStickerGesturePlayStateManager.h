@class NSMutableSet;
@protocol AEKMegaEditor;

@interface ACCStickerGesturePlayStateManager : NSObject

@property (weak, nonatomic) id<AEKMegaEditor> megaEditor;
@property (nonatomic) BOOL hasRecordedPlayState;
@property (nonatomic) BOOL shouldResume;
@property (retain, nonatomic) NSMutableSet *activeGestures;

- (id)gestureTypeFromGesture:(id)a0;
- (id)initWithMegaEditor:(id)a0;
- (void)notifyGestureBegan:(id)a0;
- (void)notifyGestureEnded:(id)a0;
- (void).cxx_destruct;

@end
