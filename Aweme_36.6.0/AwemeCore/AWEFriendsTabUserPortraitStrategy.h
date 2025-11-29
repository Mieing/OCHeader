@class NSDictionary;

@interface AWEFriendsTabUserPortraitStrategy : NSObject

@property (retain, nonatomic) NSDictionary *strategyConfig;

+ (id)sharedInstance;

- (BOOL)isStrategyAvailable:(id)a0;
- (id)userProtraitToDefaultStrategyConfig;
- (BOOL)isAvailablePortrait:(id)a0 byActivityLevel:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
