@class NSString;

@interface WAReportNavBackAlertItem : WAReportBaseItem

@property (nonatomic) long long timestampOfDialog;
@property (nonatomic) long long eventId;
@property (retain, nonatomic) NSString *eventNote;

- (id)reportString;
- (void).cxx_destruct;

@end
