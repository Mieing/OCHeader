@interface WAReportOpenForceSyncOrAsyncGetResourceItem : WAReportBaseItem

@property (nonatomic) unsigned long long resourceType;
@property (nonatomic) unsigned long long forceTypeAndReason;

- (int)reportID;
- (void)makeSafeString;
- (id)reportString;

@end
