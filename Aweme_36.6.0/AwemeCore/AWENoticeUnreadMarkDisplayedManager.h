@interface AWENoticeUnreadMarkDisplayedManager : NSObject

@property (class, nonatomic, readonly) AWENoticeUnreadMarkDisplayedManager *sharedInstance;

- (void)addNewUnreadNoticeModelID:(id)a0;
- (void)removeHaveDisplayedNoticeModelID:(id)a0;
- (BOOL)checkIsHaveNotBeDisplayedNoticeWithNoticeID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
