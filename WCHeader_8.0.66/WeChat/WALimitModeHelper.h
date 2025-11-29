@class NSString, WAContact, MMLimitedModeAuthorizationUtilLogic;
@protocol WALimitModeHelperDelegate;

@interface WALimitModeHelper : NSObject <MMLimitedModeAuthorizationUtilLogicDelegate, IWALimitModeHelper>

@property (retain, nonatomic) MMLimitedModeAuthorizationUtilLogic *utilLogic;
@property (retain, nonatomic) WAContact *pendingContact;
@property (weak, nonatomic) id<WALimitModeHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)genLimitedModeBizKeyWithAppId:(id)a0;
- (BOOL)tryBlockedByLimitModeWithContact:(id)a0 inNavVC:(id)a1;
- (void)sendVerifiedResult:(id)a0 bizType:(long long)a1 isVerified:(BOOL)a2;
- (void)onVerifyPasswordSuccessWithBizKey:(id)a0 bizType:(long long)a1;
- (void)onVerifyCancelWithBizKey:(id)a0 bizType:(long long)a1;
- (void).cxx_destruct;

@end
