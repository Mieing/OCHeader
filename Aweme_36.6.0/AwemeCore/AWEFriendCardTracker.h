@class NSString;

@interface AWEFriendCardTracker : NSObject <AWEFriendCardTracker>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackFriendCard:(id)a0;
+ (void)trackFriendFromCard:(id)a0;


@end
