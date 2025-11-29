@interface AWEIMSchoolGroupTracker : NSObject

- (void)__trackEvent:(id)a0 params:(id)a1;
- (void)track_createGroupVCShowWithEnterFrom:(id)a0;
- (void)track_enterCreateGroup:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2;
- (void)track_createGroupCompleteResult:(BOOL)a0 enterMethod:(id)a1;
- (void)track_verifyPageShowWithConversationID:(id)a0;
- (void)track_verifyPageCompletionWithConversationID:(id)a0;

@end
