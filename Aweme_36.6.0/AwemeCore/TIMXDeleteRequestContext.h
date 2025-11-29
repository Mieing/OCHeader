@class NSString, NSArray;

@interface TIMXDeleteRequestContext : NSObject

@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) long long conversationShortID;
@property (nonatomic) int conversationType;
@property (nonatomic) long long lastIndex;
@property (nonatomic) long long lastIndexV2;
@property (nonatomic) int badgeCount;
@property (nonatomic) int threadBadgeCount;
@property (retain, nonatomic) NSArray *muteBadgeCountInfos;
@property (nonatomic) int deleteAction;
@property (nonatomic) long long serverMessageID;

- (void).cxx_destruct;

@end
