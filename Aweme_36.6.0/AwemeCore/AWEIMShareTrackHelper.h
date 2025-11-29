@interface AWEIMShareTrackHelper : NSObject

+ (void)trackCompletionWithShareContext:(id)a0 statusCode:(unsigned long long)a1 transferBack:(BOOL)a2;
+ (void)trackGameInviteBackflowWithShareContext:(id)a0 eventType:(id)a1;
+ (void)trackGameInviteWithShareContext:(id)a0 eventType:(id)a1 withPostscript:(BOOL)a2;
+ (void)trackGameInviteWithShareContext:(id)a0 eventType:(id)a1;
+ (id)gameInvitationInfoWithShareContext:(id)a0;
+ (id)trackGameInviteCommonParamsWithShareContext:(id)a0 eventType:(id)a1;
+ (void)trackGameInvitePopupViewWithParams:(id)a0;

@end
