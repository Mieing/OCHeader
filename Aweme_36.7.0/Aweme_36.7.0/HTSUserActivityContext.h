@class NSString, NSError, NSUserActivity;

@interface HTSUserActivityContext : NSObject

@property (retain, nonatomic) NSString *activityType;
@property (retain, nonatomic) NSUserActivity *userActivity;
@property (retain, nonatomic) NSError *userActivityError;
@property (copy, nonatomic) id /* block */ restoreHandler;

- (void).cxx_destruct;

@end
