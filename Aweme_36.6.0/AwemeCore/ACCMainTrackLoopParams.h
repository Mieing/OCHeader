@class ACCTrackLoopContext, NSMutableArray;

@interface ACCMainTrackLoopParams : NSObject

@property (retain, nonatomic) ACCTrackLoopContext *context;
@property (nonatomic) long long loopIndex;
@property (nonatomic) BOOL isLastLoop;
@property (nonatomic) double loopStartTime;
@property (nonatomic) double loopDuration;
@property (nonatomic) double remainingDuration;
@property (retain, nonatomic) NSMutableArray *allAddedSlots;

+ (id)paramsWithContext:(id)a0 loopIndex:(long long)a1 allAddedSlots:(id)a2 loopStartTime:(double)a3 loopDuration:(double)a4 remainingDuration:(double)a5;

- (void).cxx_destruct;

@end
