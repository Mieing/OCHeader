@class NSString;

@interface IESIMMessageComplianceService : HTSService <IESIMMessageComplianceService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldFilterMessage:(id)a0;
- (BOOL)shouldFilterIESMsg:(id)a0;
- (id)securityComplianceTips;
- (long long)securityComplianceFilterHours;
- (BOOL)needClearDBWhenLogoutWithUid:(id)a0;
- (void)recordAuthCanceledWithUid:(id)a0;

@end
