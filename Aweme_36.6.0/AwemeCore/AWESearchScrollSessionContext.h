@class NSMutableIndexSet;

@interface AWESearchScrollSessionContext : NSObject

@property (retain, nonatomic) NSMutableIndexSet *scrollSessionPassIndexes;
@property (nonatomic) BOOL isFirstScrollAfterRefresh;
@property (nonatomic) double lastScrollEndTS;
@property (nonatomic) double lastScrollIdleDuration;
@property (nonatomic) double lastScrollContentOffsetY;
@property (nonatomic) double lastScrollDistance;
@property (nonatomic) double lastPanDistance;
@property (nonatomic) double lastPanDuration;
@property (nonatomic) double lastPanSpeed;
@property (nonatomic) BOOL lastScrollDirection;
@property (nonatomic) long long triggerPlayCount;
@property (weak, nonatomic) id lastPlayingItem;
@property (nonatomic) double thisScrollBeginTS;
@property (nonatomic) double startDragTime;
@property (nonatomic) double startDragOffset;
@property (nonatomic) double dragDistance;
@property (nonatomic) double dragDuration;
@property (nonatomic) double dragVelocity;
@property (nonatomic) double startDecelerationTime;
@property (nonatomic) double startDecelerationOffset;
@property (nonatomic) double decelerationDistance;
@property (nonatomic) double decelerationDuration;
@property (nonatomic) double decelerationVelocity;

- (void).cxx_destruct;
- (id)init;

@end
