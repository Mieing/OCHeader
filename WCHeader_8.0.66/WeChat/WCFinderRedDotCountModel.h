@interface WCFinderRedDotCountModel : NSObject

@property (nonatomic) long long memberUnreadMsgCount;
@property (nonatomic) long long finderUnreadMsgCount;
@property (nonatomic) long long finderPrivateMsgCount;
@property (nonatomic) BOOL showPrivateEntryRedDot;

- (long long)getTotalMentionCount;

@end
