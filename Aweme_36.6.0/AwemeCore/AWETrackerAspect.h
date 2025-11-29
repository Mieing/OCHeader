@class NSString;

@interface AWETrackerAspect : NSObject

@property (nonatomic) BOOL shouldBeIgnored;
@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) id /* block */ block;

+ (id)aspectForEvent:(id)a0 block:(id /* block */)a1;
+ (id)zeroAspect;

- (id)initWithEvent:(id)a0 block:(id /* block */)a1;
- (void).cxx_destruct;

@end
