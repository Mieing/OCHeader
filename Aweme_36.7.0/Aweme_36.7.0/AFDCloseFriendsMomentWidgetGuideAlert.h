@class NSDictionary, NSString, AFDCloseFriendsVisitorManager;

@interface AFDCloseFriendsMomentWidgetGuideAlert : NSObject <AWEAlertProtocol>

@property (retain, nonatomic) NSDictionary *trackParams;
@property (nonatomic) unsigned long long sourceFrom;
@property (nonatomic) unsigned long long interactionType;
@property (retain, nonatomic) AFDCloseFriendsVisitorManager *visitorManager;
@property (nonatomic) BOOL decoupleVisitorManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (BOOL)canShowWithContext:(id)a0;
- (void)showWithContext:(id)a0 onClose:(id /* block */)a1;
- (void).cxx_destruct;

@end
