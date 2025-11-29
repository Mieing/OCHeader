@interface AWEDiggShareFastReplyStrategy : NSObject <AFDFastReplyBusinessTracker, AFDFastReplyBusinessInputView, AFDFastReplyBusinessDataSource, AFDFastReplyBusinessStrategy> {
    void /* unknown type, empty encoding */ playInteractionContext;
    void /* unknown type, empty encoding */ hasDisplay;
    void /* unknown type, empty encoding */ hasTrackedDisplay;
    void /* unknown type, empty encoding */ recommendEmojis;
    void /* unknown type, empty encoding */ didRequestedForEmojis;
    void /* unknown type, empty encoding */ isRequestingForEmojis;
    void /* unknown type, empty encoding */ shouldUseDefaultEmojis;
}

+ (BOOL)fastReplyCanShowWithContext:(id)a0;
+ (BOOL)fastReplyRefactorCanShowWithModel:(id)a0 context:(id)a1;

- (id)fastReplyEnterMethod;
- (id)fastReplyShowEvent;
- (id)fastReplyShowParams;
- (id)fastReplyClickEvent;
- (id)fastReplyTrackerClickParamsWithClickType:(unsigned long long)a0 emoji:(id)a1;
- (id)fastReplyInputMode;
- (id)fastReplyPlaceholder;
- (id)fastReplyEmojis;
- (id)fastReplyAvatarURL;
- (BOOL)fastReplyCanUpdateViewBeforeAppear;
- (id)fastReplyTriggerRule;
- (BOOL)fastReplyShouldAvoidPriority;
- (void)fastReplyDidShow:(id)a0;
- (void)fastReplyDidClickedWithType:(unsigned long long)a0 emoji:(id)a1;
- (void)fastReplyDidDismiss;
- (BOOL)fastReplyShouldRespondTrigger:(id)a0;
- (void)fastReplyDidSend;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)init;

@end
