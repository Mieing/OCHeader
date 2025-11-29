@class NSString, TIMXSDKInstance;

@interface TIMXConvLastHintMsgBatchUpdateProcesser : NSObject <TIMXDBConversationORMBatchUpateMangerDelegate> {
    TIMXSDKInstance *_r;
}

@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) id /* block */ batchUpdateRuleBlock;
@property (copy, nonatomic) id /* block */ realTimeUpdateRuleBlock;
@property (nonatomic) BOOL shouldRealTimeInjectRule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearVersionWithUid:(id)a0;
+ (void)clearVersionWithRootObject:(id)a0 uid:(id)a1;
+ (id)__getVersionWithRootObject:(id)a0 uid:(id)a1;
+ (void)__setVersionWithRootObject:(id)a0 version:(id)a1 uid:(id)a2;
+ (void)__updateLastHintMsgWithRootObject:(id)a0 latestSubMessages:(id)a1 conv:(id)a2;
+ (void)realTimeUpdateLastHintMsgWithRootObject:(id)a0 conv:(id)a1 changedMsg:(id)a2 reason:(long long)a3 transaction:(id)a4;
+ (id)__getVersionKeyWithUid:(id)a0;
+ (void)realTimeUpdateLastHintMsgWithRootObject:(id)a0 conv:(id)a1 changedMsg:(id)a2 reason:(long long)a3;

- (BOOL)needBatchUpdateDB;
- (BOOL)hasBatchUpdateDone;
- (void)finishBatchUpdateAndSetNowVersion;
- (BOOL)shouldBatchUpdateStranger;
- (id)initWithUid:(id)a0 shouldRealTimeInjectRule:(BOOL)a1;
- (id)initWithRootObject:(id)a0 uid:(id)a1 shouldRealTimeInjectRule:(BOOL)a2;
- (void).cxx_destruct;

@end
