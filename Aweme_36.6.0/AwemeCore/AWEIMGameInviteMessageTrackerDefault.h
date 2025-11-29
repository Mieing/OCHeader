@class NSString;

@interface AWEIMGameInviteMessageTrackerDefault : NSObject <AWEIMGameInviteMessageTrackerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)trackParamsWithMessage:(id)a0 transferResultType:(unsigned long long)a1 conversationID:(id)a2;
+ (id)trackInviteCardShowParamsWithMessage:(id)a0 conversationID:(id)a1;
+ (void)trackClickWithMessage:(id)a0 trasferResultType:(unsigned long long)a1 conversationID:(id)a2;
+ (void)trackInviteCardShowWithMessage:(id)a0 conversationID:(id)a1;


@end
