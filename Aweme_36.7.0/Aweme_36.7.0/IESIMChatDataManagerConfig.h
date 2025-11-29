@class NSString, NSDictionary;

@interface IESIMChatDataManagerConfig : NSObject

@property (copy, nonatomic) NSString *uid;
@property (nonatomic) BOOL needUpdateConversationForSecUid;
@property (nonatomic) long long firstPageSize;
@property (nonatomic) long long loadMorePageSize;
@property (nonatomic) BOOL totalUnreadCountContainsMute;
@property (nonatomic) long long boxTypeMask;
@property (nonatomic) long long shouldNotContainedBoxTypeMask;
@property (nonatomic) long long unreadNeglectMask;
@property (nonatomic) BOOL containMaskZero;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSDictionary *appConvMaskDict;
@property (copy, nonatomic) NSDictionary *appConvShouldNotContainMaskDict;

+ (long long)timx_convertPriorityToLowLevelPriority:(long long)a0;

- (void).cxx_destruct;
- (id)init;

@end
