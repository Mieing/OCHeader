@class NSArray, NSMutableDictionary, NSString;

@interface AWEInteractionNoticeErrorHandlerManager : NSObject <AWEUserMessage, AWEInteractionNoticeErrorHandlerManagerProtocol>

@property (copy, nonatomic) NSArray *checkGroups;
@property (retain, nonatomic) NSMutableDictionary *noticeModelMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)updateNoticeCheckGroups:(id)a0;
- (void)preprocessInteractionNoticeCountWithModel:(id)a0;
- (void)interactionNoticeCountDidUpdateWithModel:(id)a0;
- (void)didReadInteractionNoticeWithGroupID:(long long)a0;
- (BOOL)isDowngradeNoticeWithGroupID:(long long)a0;
- (BOOL)shouldUseBackupNoticeCountWithModel:(id)a0;
- (void)useBackupNoticeCountWithModel:(id)a0;
- (BOOL)canSaveInteractionNoticeCountModel:(id)a0;
- (void)saveInteractionNoticeCountModel:(id)a0;
- (id)interactionNoticeCountModelWithGroupID:(long long)a0;
- (BOOL)isABEnable;
- (void)reportInvalidCaseWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)resetCache;

@end
