@class NSString, NSNumber;

@interface TIMXUnreadCountChangeInfo : NSObject

@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) long long oldUnreadCount;
@property (nonatomic) long long newUnreadCount;
@property (nonatomic) long long oldProcessedUnreadCount;
@property (nonatomic) long long newProcessedUnreadCount;
@property (nonatomic) long long badgeCount;
@property (retain, nonatomic) NSNumber *readBadgeCount;
@property (retain, nonatomic) NSNumber *oldMixedChainUnreadCount;
@property (copy, nonatomic) NSString *changedReason;

- (void).cxx_destruct;

@end
