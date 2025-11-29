@class NSString, NSMutableSet, NSTimer;

@interface MMAnimatedImagePlayTimer : NSObject {
    NSTimer *m_timer;
}

@property (retain, nonatomic) NSString *runloopMode;
@property (retain, nonatomic) NSMutableSet *playingTasks;

+ (unsigned long long)getTickCount;

- (id)init;
- (void)startUpdateTasks;
- (void)stopUpdateTasks;
- (void)updateTasks;
- (void).cxx_destruct;

@end
