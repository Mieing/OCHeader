@class NSString;

@interface AWEAntiAddictOnTimeVideoAction : AWEAntiAddictVideoAction <AWEAntiAddictTimerListenerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleName;

- (id)updatedDataOnPrepare;
- (id)updatedDataOnRevoke;
- (id)updatedDataOnBegin;
- (id)updatedDataOnEnd;
- (void)postInsertFeedNotificationInfo:(id)a0;
- (void)postDeleteFeedNotification;
- (void)loopWithAntiAddictTimer;
- (BOOL)satisfiedWithSuppressLimit:(id)a0 showedRecords:(id)a1 now:(id)a2;
- (long long)priority;
- (void)prepare;
- (void)begin;
- (void)end;
- (void)revoke;

@end
