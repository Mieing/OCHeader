@class NSString;

@interface TingMembershipManager : NSObject <TingMembershipListener>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)setNeedsUpdateMembershipInfo;
- (void)refreshMembershipInfoIfNeeded;
- (void)didWillEnterForegroundNotification:(id)a0;
- (void)onMembershipStatusChanged:(int)a0 toStatus:(int)a1;
- (void)onMembershipInfoUpdated:(id)a0;

@end
