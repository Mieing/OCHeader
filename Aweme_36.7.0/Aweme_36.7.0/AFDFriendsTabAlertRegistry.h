@interface AFDFriendsTabAlertRegistry : NSObject

@property (nonatomic) BOOL isAdded;
@property (readonly, nonatomic) long long alertID;
@property (nonatomic) BOOL disableColdLaunch;
@property (copy, nonatomic) id /* block */ addAlertBlock;
@property (copy, nonatomic) id /* block */ addColdLaunchAlertBlock;

- (id)initWithAlertID:(long long)a0;
- (void)addAlert;
- (void)resetAlertAddState;
- (void)addColdLaunchAlert;
- (void).cxx_destruct;

@end
