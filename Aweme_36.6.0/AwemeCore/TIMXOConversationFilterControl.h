@class NSArray, TIMXThreadSafeMutableDictionary, TIMXSDKInstance;
@protocol TIMXOConversationFilterControlDelegate;

@interface TIMXOConversationFilterControl : NSObject {
    TIMXSDKInstance *_r;
}

@property (nonatomic) BOOL isDouYinTarget;
@property (retain, nonatomic) NSArray *supportBoxTypes;
@property (retain, nonatomic) TIMXThreadSafeMutableDictionary *filterCacheDic;
@property (nonatomic) BOOL boxTypeMaskEnable;
@property (nonatomic) long long boxType;
@property (nonatomic) long long shouldNotContainedBoxTypeMask;
@property (nonatomic) BOOL containNoboxType;
@property (nonatomic) long long boxTypeMask;
@property (nonatomic) double demoteUnreadCountTimestamp;
@property (weak, nonatomic) id<TIMXOConversationFilterControlDelegate> delegate;

- (BOOL)p_isInvalidConversation:(id)a0;
- (void)conversationDidUpdate:(id)a0;
- (BOOL)isBoxTypeSupport:(id)a0;
- (BOOL)shouldShowConversation:(id)a0;
- (BOOL)shouldShowWithConversationId:(id)a0;
- (id)syncExtFromConversation:(id)a0;
- (BOOL)isNotDisplay:(id)a0;
- (BOOL)isBehaviorSameAsGeneralBoxType:(long long)a0;
- (id)initWithRoot:(id)a0 boxType:(long long)a1 boxTypeMask:(long long)a2 boxTypeMaskEnable:(BOOL)a3 shouldNotContainedBoxTypeMask:(long long)a4 containNoboxType:(BOOL)a5 delegate:(id)a6;
- (BOOL)shouldShowWithConversation:(id)a0 conversationID:(id)a1;
- (void).cxx_destruct;

@end
