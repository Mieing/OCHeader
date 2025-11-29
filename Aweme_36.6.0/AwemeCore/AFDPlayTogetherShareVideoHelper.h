@class NSString;

@interface AFDPlayTogetherShareVideoHelper : NSObject <AFDPlayTogetherShareVideoHelperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAFDServiceDOUYINHTSAdaperClass;
+ (BOOL)p_shouldShowPlayRemoteWithLiveRoom:(id)a0;
+ (BOOL)p_shouldShowPlayRemoteWithAwemeModel:(id)a0;
+ (BOOL)shouldShowShareVideoWithPlayTogetherInputButtonWithContext:(id)a0;
+ (void)tryToSendCallingPushToUsers:(id)a0 roomID:(id)a1 completion:(id /* block */)a2;
+ (void)trackSharePanelInviteWithAwemeModel:(id)a0 eventParam:(id)a1 userID:(id)a2 sessionID:(id)a3;
+ (void)trackShareVideoWithPlayRemoteDoubleCheckWithEnterFrom:(id)a0 eventPage:(id)a1;

- (id)aAFDServiceDOUYINHTSAdaper;

@end
