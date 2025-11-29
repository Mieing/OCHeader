@class NSString;

@interface AWEIMConvUnreadNeglectMuteBatchUpdateProcesser : NSObject <IESIMDBConversationORMBatchUpateMangerDelegate>

@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) id /* block */ batchUpdateRuleBlock;
@property (copy, nonatomic) id /* block */ realTimeUpdateRuleBlock;
@property (nonatomic) BOOL shouldRealTimeInjectRule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearVersionWithUid:(id)a0;

- (BOOL)needBatchUpdateDB;
- (BOOL)hasBatchUpdateDone;
- (void)finishBatchUpdateAndSetNowVersion;
- (BOOL)shouldBatchUpdateStranger;
- (id)initWithUid:(id)a0 shouldRealTimeInjectRule:(BOOL)a1;
- (BOOL)ifRelyConvSettingInfoChange;
- (void).cxx_destruct;

@end
