@interface WCStoryReportUtil : NSObject

@property (nonatomic) unsigned long long storyEntranceExposeTimeStamp;

- (void)genStoryEntranceExposeTime;
- (id)reportEntranceExposeWithHeadImageArray:(id)a0 unreadCount:(unsigned long long)a1 unreadRelatedCommentCount:(unsigned long long)a2;

@end
