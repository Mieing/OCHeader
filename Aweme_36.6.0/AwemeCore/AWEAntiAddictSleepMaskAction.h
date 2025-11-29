@interface AWEAntiAddictSleepMaskAction : AWEAntiAddictBaseAction

+ (id)moduleName;

- (id)updatedDataOnPrepare;
- (id)updatedDataOnRevoke;
- (id)updatedDataOnBegin;
- (id)updatedDataOnEnd;
- (void)postInsertFeedNotificationInfo:(id)a0;
- (void)postDeleteFeedNotification;
- (void)prepare;
- (void)begin;
- (void)end;
- (void)revoke;

@end
