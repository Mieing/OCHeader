@class NSDictionary, TIMXSDKInstance;
@protocol TIMXOConversationsUnreadCountCalculatorDelegate;

@interface TIMXOConversationsUnreadCountCalculatorInitConfig : NSObject

@property (weak, nonatomic) TIMXSDKInstance *rootObject;
@property (retain, nonatomic) id<TIMXOConversationsUnreadCountCalculatorDelegate> delegate;
@property (nonatomic) BOOL maintainUnreadCount;
@property (nonatomic) BOOL unreadCountContainsMutedConversation;
@property (nonatomic) BOOL unreadCountContainsHalfMutedConversation;
@property (nonatomic) BOOL maintainMentionedCount;
@property (nonatomic) BOOL addToIMTotalUnreadCount;
@property (nonatomic) long long boxType;
@property (nonatomic) long long userIDWhenInit;
@property (nonatomic) long long boxTypeMask;
@property (nonatomic) long long shouldNotContainedBoxTypeMask;
@property (nonatomic) long long unreadNeglectMask;
@property (nonatomic) BOOL containNoboxType;
@property (nonatomic) BOOL canUseOneSqlToInquireUnreadCount;
@property (nonatomic) BOOL shouldDemoteUnreadCount;
@property (nonatomic) double demoteUnreadCountTimestamp;
@property (copy, nonatomic) NSDictionary *appConvMaskDict;
@property (copy, nonatomic) NSDictionary *appConvShouldNotContainMaskDict;

- (void).cxx_destruct;

@end
