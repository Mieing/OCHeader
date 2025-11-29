@interface TSPKAdvanceAppStatusTrigger : TSPKDetectTrigger

@property (nonatomic) BOOL detectEnterForeground;
@property (nonatomic) double minAppStatusChangeTime;
@property (nonatomic) double lastTimeInBackground;

- (void)applicationEnterBackground;
- (void)applicationEnterForeground;
- (void)executeDetectAction;
- (void)decodeParams:(id)a0;
- (void)dealloc;
- (void)setup;

@end
