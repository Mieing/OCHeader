@interface AWEFeedCreationPastMemoryCardController : AWEFeedCreationCardMigrationBaseController

+ (id)businessID;

- (void)cardDidAppear:(id)a0 withAweme:(id)a1;
- (BOOL)shouldCancelInsertCard:(id)a0 withAweme:(id)a1 isFromFeed:(BOOL)a2 willInsertForRowAtIndexPath:(id)a3;

@end
