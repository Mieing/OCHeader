@class NSString, TIMXRange, NSArray;

@interface TIMXInboxMessagePullContext : NSObject

@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *anchorMessageID;
@property (nonatomic) unsigned long long limit;
@property (nonatomic) BOOL includeInvisible;
@property (retain, nonatomic) TIMXRange *inRange;
@property (copy, nonatomic) NSArray *skipRanges;
@property (nonatomic) unsigned long long direction;
@property (nonatomic) BOOL shouldContainBoundaryMessage;
@property (nonatomic) long long pullMessageIndex;
@property (copy, nonatomic) NSString *pullReason;

- (void).cxx_destruct;

@end
