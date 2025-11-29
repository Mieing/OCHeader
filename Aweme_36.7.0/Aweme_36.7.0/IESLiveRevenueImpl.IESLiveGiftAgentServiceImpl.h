@class _TtC18IESLiveRevenueImpl27IESLiveGiftAgentServiceImpl;

@interface IESLiveRevenueImpl.IESLiveGiftAgentServiceImpl : NSObject <IESLiveAioLinkGiftAIAgentDialogUseCase> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_conversationRecordMap;
    void /* unknown type, empty encoding */ $__lazy_storage_$_conversationTimeMap;
    void /* unknown type, empty encoding */ $__lazy_storage_$_conversationToQueryTimeList;
    void /* unknown type, empty encoding */ $__lazy_storage_$_maxConversationCount;
    void /* unknown type, empty encoding */ $__lazy_storage_$_maxQueryCount;
}

@property (class, nonatomic, readonly) _TtC18IESLiveRevenueImpl27IESLiveGiftAgentServiceImpl *sharedInstance;

@property (nonatomic, retain) id /* block */ getAIResortInfoBlock;

+ (id)defaultInstance;

- (id)getCurrentAISortInfo;
- (id)getAllGiftAIAgentDataByDimension:(id)a0;
- (id)pushSingleGiftAIAgentData:(id)a0;
- (id)updateSingleGiftAIAgentData:(id)a0;
- (id)removeSingleGiftAIAgentData:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
