@interface ABKBaseStickerConfig : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } position;
@property (nonatomic) double scale;
@property (nonatomic) double rotation;
@property (nonatomic) double alpha;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (nonatomic) BOOL disableDelete;
@property (nonatomic) BOOL disableBubble;
@property (nonatomic) BOOL disableGesture;
@property (nonatomic) BOOL stayPlayWhileSelect;
@property (copy, nonatomic) id /* block */ trackClickBlock;
@property (copy, nonatomic) id /* block */ trackMoveBlock;
@property (copy, nonatomic) id /* block */ trackAdjustBlock;
@property (copy, nonatomic) id /* block */ gestureEndDone;

- (void).cxx_destruct;
- (id)init;

@end
