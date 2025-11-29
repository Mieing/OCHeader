@class NSDictionary, AWEYAPOriginEntranceUserActivityContext;

@interface AWEYAPOriginEntranceContext : NSObject

@property (nonatomic) unsigned long long contextType;
@property (copy, nonatomic) NSDictionary *launchOptions;
@property (retain, nonatomic) AWEYAPOriginEntranceUserActivityContext *userActivityContext;

- (void).cxx_destruct;

@end
