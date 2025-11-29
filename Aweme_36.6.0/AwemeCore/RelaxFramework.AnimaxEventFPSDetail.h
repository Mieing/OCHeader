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

- (void).cxx_destruct;
- (id)init;

@end
