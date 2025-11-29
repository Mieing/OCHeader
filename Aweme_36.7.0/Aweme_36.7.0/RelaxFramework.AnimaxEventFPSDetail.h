@class NSString;

@interface RelaxFramework.AnimaxEventFPSDetail : NSObject {
    void /* function */ animationID;
}

@property (nonatomic) double fps;
@property (nonatomic) double maxDropRate;
@property (nonatomic, copy) NSString *animationID;
@property (nonatomic) double current;
@property (nonatomic) double total;
@property (nonatomic) int loopIndex;

- (id)initWithFps:(double)a0 maxDropRate:(double)a1 animationID:(id)a2 current:(double)a3 total:(double)a4 loopIndex:(int)a5;
- (void).cxx_destruct;
- (id)init;

@end
