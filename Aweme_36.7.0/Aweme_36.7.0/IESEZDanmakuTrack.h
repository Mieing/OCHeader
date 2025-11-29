@class NSHashTable;

@interface IESEZDanmakuTrack : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) long long index;
@property (nonatomic) BOOL occupied;
@property (nonatomic) double releaseOccupationTime;
@property (retain, nonatomic) NSHashTable *runningDanmakuData;
@property (nonatomic) BOOL disabled;
@property (nonatomic) BOOL freeze;

- (void)stopAllRunningDanmakuData;
- (void).cxx_destruct;

@end
