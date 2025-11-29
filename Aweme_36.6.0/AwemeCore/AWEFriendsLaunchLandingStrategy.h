@class NSString;

@interface AWEFriendsLaunchLandingStrategy : NSObject <AWEHPLandingStrategyProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLandingContext:(id)a0;
- (BOOL)shouldStrategyEffect;
- (id)getLandingScheduledModel;

@end
