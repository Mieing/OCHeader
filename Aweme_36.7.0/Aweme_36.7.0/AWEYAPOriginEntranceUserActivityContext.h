@class NSUserActivity;

@interface AWEYAPOriginEntranceUserActivityContext : NSObject

@property (retain, nonatomic) NSUserActivity *userActivity;
@property (copy, nonatomic) id /* block */ restorationHandler;

- (void).cxx_destruct;

@end
