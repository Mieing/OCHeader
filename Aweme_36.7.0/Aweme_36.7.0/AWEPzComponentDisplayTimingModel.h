@protocol AWEPzComponentProtocol;

@interface AWEPzComponentDisplayTimingModel : NSObject

@property (weak, nonatomic) id<AWEPzComponentProtocol> component;
@property (nonatomic) double startTimingTime;

- (void).cxx_destruct;
- (id)description;

@end
