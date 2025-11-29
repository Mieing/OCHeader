@class NSString;

@interface AFDPrivacyAliasChecker : NSObject <AWEUserMessage, AFDPrivacyAliasCheckerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (BOOL)enablePrivacyAliasChecker;
- (id)handleCheckText:(id)a0 type:(unsigned long long)a1;
- (void)trackWithText:(id)a0 userID:(id)a1 type:(unsigned long long)a2 scene:(id)a3 isAlias:(BOOL)a4;
- (void)alertAliasRisksIfNeed:(id)a0;
- (void)checkText:(id)a0 userID:(id)a1 type:(unsigned long long)a2 scene:(id)a3;
- (void)checkInteractionStickerModel:(id)a0 scene:(id)a1;
- (void)checkVideoShareStickerModel:(id)a0 scene:(id)a1;
- (void)checkInteractionStickers:(id)a0 scene:(id)a1;
- (void)checkText:(id)a0 textExtra:(id)a1 userID:(id)a2 type:(unsigned long long)a3 scene:(id)a4;
- (void)checkRouterTitleUserDisplayNameWithText:(id)a0 user:(id)a1;
- (BOOL)enablePublishDisplayNameOpt;
- (id)init;
- (void)dealloc;

@end
