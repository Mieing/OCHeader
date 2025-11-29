@class NSMutableSet;

@interface WCFinderMentionMgr : NSObject

@property (retain, nonatomic) NSMutableSet *followingContactSet;

- (BOOL)contactFollowingWithMention:(id)a0;
- (void)startToFollowMentionContact:(id)a0;
- (void)endMentionContactFollow:(id)a0;
- (void).cxx_destruct;

@end
