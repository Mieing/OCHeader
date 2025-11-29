@interface AFDConcernFastReplyStrategy : NSObject <AFDFastReplyBusinessTracker, AFDFastReplyBusinessDataSource, AFDFastReplyBusinessStrategy> {
    void /* unknown type, empty encoding */ playInteractionContext;
}

+ (BOOL)fastReplyCanShowWithContext:(id)a0;
+ (BOOL)fastReplyRefactorCanShowWithModel:(id)a0 context:(id)a1;

- (id)fastReplyEnterMethod;
- (id)fastReplyShowEvent;
- (id)fastReplyClickEvent;
- (id)fastReplyPlaceholder;
- (id)fastReplyEmojis;
- (id)fastReplyTriggerRule;
- (void)fastReplyDidDismiss;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)init;

@end
