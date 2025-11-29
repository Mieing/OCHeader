@class NSString, TIMXSDKInstance;

@interface TIMXConvLastMsgBatchUpdateProcesser : NSObject <TIMXDBConversationORMBatchUpateMangerDelegate> {
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
+ (id)__getVersionKeyWithUid:(id)a0;
+ (void)realTimeUpdateLastMsgWithRootObject:(id)a0 conv:(id)a1 newMsg:(id)a2 maxOrderIndex:(id)a3 reason:(long long)a4 transaction:(id)a5;
+ (void)__updateLastMsgWithRootObject:(id)a0 conv:(id)a1 msg:(id)a2;
+ (void)realTimeUpdateLastMsgWithRootObject:(id)a0 conv:(id)a1 newMsg:(id)a2 reason:(long long)a3 transaction:(id)a4;
+ (void)__updatelocalInfoDictWithRootObject:(id)a0 conv:(id)a1 msg:(id)a2;
+ (void)realTimeUpdateLastMsgWithRootObject:(id)a0 conv:(id)a1 newMsg:(id)a2 reason:(long long)a3;

- (BOOL)needBatchUpdateDB;
- (BOOL)hasBatchUpdateDone;
- (void)finishBatchUpdateAndSetNowVersion;
- (BOOL)shouldBatchUpdateStranger;
- (id)initWithUid:(id)a0 shouldRealTimeInjectRule:(BOOL)a1;
- (id)initWithRootObject:(id)a0 uid:(id)a1 shouldRealTimeInjectRule:(BOOL)a2;
- (void).cxx_destruct;

@end
