@class NSString, NSDictionary, NSArray, NSNumber;

@interface TIMXMarkReadRequestContext : NSObject

@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) long long conversationShortID;
@property (nonatomic) int conversationType;
@property (nonatomic) long long readIndex;
@property (nonatomic) long long readIndexV2;
@property (retain, nonatomic) NSDictionary *readBadgeCountDict;
@property (retain, nonatomic) NSArray *muteReadBadgeCountInfos;
@property (copy, nonatomic) NSNumber *unreadCount;
@property (copy, nonatomic) NSNumber *totalUnreadCount;
@property (retain, nonatomic) NSDictionary *totalUnreadCountMap;
@property (nonatomic) long long serverMessageID;
@property (copy, nonatomic) NSString *ticket;

- (void).cxx_destruct;

@end
