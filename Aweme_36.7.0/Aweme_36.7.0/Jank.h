@class NSMutableArray;

@interface Jank : NSObject

@property (nonatomic) long long jank;
@property (nonatomic) long long stutter;
@property (retain, nonatomic) NSMutableArray *renderIntervalArray;

- (void).cxx_destruct;
- (id)init;
- (void)update:(long long)a0;
- (void)reset;
- (float)average:(id)a0;

@end
