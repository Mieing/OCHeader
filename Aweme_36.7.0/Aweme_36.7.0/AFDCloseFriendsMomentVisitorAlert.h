@class NSString, AFDCloseFriendsVisitorManager;

@interface AFDCloseFriendsMomentVisitorAlert : NSObject <AWEAlertProtocol>

@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) id /* block */ clickSeeVisitorButtonBlock;
@property (nonatomic) BOOL decoupleVisitorManager;
@property (retain, nonatomic) AFDCloseFriendsVisitorManager *visitorManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (BOOL)canShowWithContext:(id)a0;
- (void)showWithContext:(id)a0 onClose:(id /* block */)a1;
- (unsigned long long)maxIndexToShow;
- (void)decoupleVisitorManagerShowWithContext:(id)a0 onClose:(id /* block */)a1;
- (id)initWithStyle:(unsigned long long)a0 clickSeeVisitorButtonBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
