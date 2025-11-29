@class NSString;

@interface IESIMDBConvBatchUpdateRuleInjector : NSObject <IESIMDBConvBatchUpdateRuleInjectorProtocol>

@property (nonatomic) BOOL hasFoldBoxTypeBatchUpdateDone;
@property (nonatomic) BOOL hasStrangerBoxTypeBatchUpdateDone;
@property (nonatomic) BOOL hasLiveConsultBoxTypeBatchUpdateDone;
@property (nonatomic) BOOL hasUnreadNeglectMaskMuteBatchUpdateDone;
@property (nonatomic) BOOL hasProcessedUnreadCountBatchUpdateDone;
@property (nonatomic) BOOL hasNotDisplayBoxTypeBatchUpdateDone;
@property (nonatomic) BOOL hasUnreadBoxTypeBatchUpdateDone;
@property (nonatomic) BOOL hasThreadChatBatchUpdateDone;
@property (nonatomic) BOOL hasEnterpriseBoxTypeBatchUpdateDone;
@property (nonatomic) BOOL hasfeedSkylightBatchUpdateDone;
@property (nonatomic) BOOL isQualifiedForEnterpriseModes;
@property (nonatomic) BOOL hasDsConvFilterBatchUpdateDone;
@property (nonatomic) BOOL hasStrangerTrashBatchUpdateDone;
@property (nonatomic) BOOL hasHiHiBoxTypeBatchUpdateDone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasAllRulesBatchUpdateDone;
- (id)p_batchUpdateManager;
- (void)loginWithUid:(id)a0;
- (void)injectorRule:(id)a0;
- (void)clearAllSDKProcessersVersionWithUid:(id)a0;
- (void)clearLastHintMsgProcesserVersionWithUid:(id)a0;

@end
